#ifndef MYSERVER_H
#define MYSERVER_H

#include<QTcpServer>
#include<QTcpSocket>
#include <QVector>
#include <QTime>

class Server : public QTcpServer
{
Q_OBJECT

public:
    Server();
    QTcpSocket *socket;

private:
    QVector <QTcpSocket*> Sockets;
    QByteArray Data;
    void SendToClient(QString str);
    quint16 nextBlockSize;
public slots:
    void incomingConnection(qintptr socketDescriptor);
    void slotReadyRead();
};

#endif // MYSERVER_H
