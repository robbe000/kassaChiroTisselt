#ifndef BACKUP_H
#define BACKUP_H

#include <QObject>
#include <QFileDialog>
#include <QDebug>
#include <QDateTime>
#include <QFile>

class Backup : public QObject
{
    Q_OBJECT
public:
    explicit Backup(QObject *parent = nullptr);

signals:

public slots:
};

#endif // BACKUP_H
