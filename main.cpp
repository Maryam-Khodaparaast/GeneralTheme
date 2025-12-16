#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "ui_property.h"
#include "fontfamilies.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    Ui_property ui_property;
    engine.rootContext()->setContextProperty("Ui_property", &ui_property);

    FontFamilies fontFamilies;
    engine.rootContext()->setContextProperty("fontFamilies", &fontFamilies);



    engine.load(url);

    return app.exec();
}
