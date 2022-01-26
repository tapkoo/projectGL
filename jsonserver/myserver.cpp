#include "myserver.h"

myserver::myserver(){}

myserver::~myserver(){}

void myserver::startServer()
{
    if (this->listen(QHostAddress::Any,5555))
    {
        qDebug()<<"Listening";
    }
    else
    {
        qDebug()<<"Not listening";
    }
}

void myserver::incomingConnection(int socketDescriptor)
{
    socket = new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);

        connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
        connect(socket,SIGNAL(disconnected()),this,SLOT(sockDisk()));

    qDebug()<<socketDescriptor<<" Client connected";

    socket->write("{\"type\":\"connect\",\"status\":\"yes\"}");
    qDebug()<<"Send client connect statys - Yes";
}

void myserver::sockReady()
{
   Data = socket->readAll();
    qDebug()<<"Data: "<<Data;

    doc = QJsonDocument::fromJson(Data, &docError);

    if (docError.errorString().toInt()==QJsonParseError::NoError)
    {
        if ((doc.object().value("type").toString()=="select") && (doc.object().value("params").toString()=="room"))
        {
            QFile file;
            file.setFileName("C:\\room.json");
            if (file.open(QIODevice::ReadOnly|QFile::Text))
            {
                QByteArray fromFile = file.readAll();
                QByteArray itog = "{\"type\":\"resultSelect\",\"result\":"+fromFile+"}";

                socket->write(itog);
                socket->waitForBytesWritten(500);
            }

            file.close();
        }
    }
}

void myserver::sockDisk()
{
    qDebug()<<"Disconnect";
    socket->deleteLater();
}
