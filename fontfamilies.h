#ifndef FONTFAMILIES_H
#define FONTFAMILIES_H

#include <QObject>
#include <QStringList>


class FontFamilies : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QStringList families READ families WRITE setFamilies NOTIFY familiesChanged)
    Q_PROPERTY(QString currentFamily READ currentFamily WRITE setCurrentFamily NOTIFY currentFamilyChanged)


    QStringList m_families;
    QString m_currentFamily;

public:
    explicit FontFamilies(QObject *parent = nullptr);

QStringList families() const;

QString currentFamily() const;

Q_INVOKABLE void reload(const QString &resourceDir = QStringLiteral(":/fonts"));

public slots:
void setFamilies(QStringList families);

void setCurrentFamily(QString currentFamily);

signals:

void familiesChanged();
void currentFamilyChanged(QString currentFamily);
};

#endif // FONTFAMILIES_H
