#ifndef MYSERVER_H
#define MYSERVER_H

#include<QTcpServer>
#include<QTcpSocket>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QFile>

class myserver: public QTcpServer
{
  Q_OBJECT
public:
    myserver();
    ~myserver();

    QTcpSocket* socket;
    QByteArray Data;

    QJsonDocument doc;
    QJsonParseError docError;

public slots:
    void startServer();
    void incomingConnection(int socketDescrptor);
    void sockReady();
    void sockDisk();
};

#endif // MYSERVER_H
