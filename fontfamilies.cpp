#include "fontfamilies.h"
#include <QDir>
#include <QFontDatabase>
#include <QGuiApplication>
#include <QSet>
#include <algorithm>
#include <QDebug>
FontFamilies::FontFamilies(QObject *parent) : QObject(parent)
{

    reload(QStringLiteral(":/fonts"));
}

QStringList FontFamilies::families() const
{
    return m_families;
}

QString FontFamilies::currentFamily() const
{
    return m_currentFamily;
}

void FontFamilies::reload(const QString &resourceDir)
{
    QDir dir(resourceDir);
       if (!dir.exists()) {
           qWarning() << "Font resource dir not found:" << resourceDir;
           return;
       }

       const QStringList filters = { "*.ttf", "*.TTF", "*.otf", "*.OTF", "*.ttc", "*.TTC" };
       const QStringList files = dir.entryList(filters, QDir::Files);

       QSet<QString> famSet;

       for (const QString &file : files) {
           const QString path = resourceDir + "/" + file;
           const int id = QFontDatabase::addApplicationFont(path);
           if (id < 0) {
               qWarning() << "Failed to load font:" << path;
               continue;
           }

           const QStringList fams = QFontDatabase::applicationFontFamilies(id);
           for (const QString &f : fams)
               famSet.insert(f);
       }

       QStringList newList = famSet.values();
       std::sort(newList.begin(), newList.end(),
                 [](const QString &a, const QString &b){ return a.toLower() < b.toLower(); });

       if (newList == m_families)
           return;

       m_families = newList;
       emit familiesChanged();

       if (m_currentFamily.isEmpty() && !m_families.isEmpty())
           setCurrentFamily(m_families.first());
}

void FontFamilies::setFamilies(QStringList families)
{
    if (m_families == families)
        return;

    m_families = families;
    emit familiesChanged();
}

void FontFamilies::setCurrentFamily(QString currentFamily)
{
    if (m_currentFamily == currentFamily)
        return;

    m_currentFamily = currentFamily;
    emit currentFamilyChanged(m_currentFamily);
}
