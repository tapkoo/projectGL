#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    socket = new QTcpSocket(this);
        connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
        connect(socket,SIGNAL(disconnected()),this,SLOT(sockDisk()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    socket->connectToHost("127.0.0.1",5555);
}

void MainWindow::sockDisk()
{
    socket->deleteLater();
}

void MainWindow::sockReady()
{
    if(socket->waitForConnected(500))
    {
        socket->waitForConnected(500);
        Data = socket->readAll();

        doc = QJsonDocument::fromJson(Data, &docError);

        if (docError.errorString().toInt()==QJsonParseError::NoError)
        {
            if( (doc.object().value("type").toString() == "connect") && (doc.object().value("status").toString() == "yes"))
            {
                QMessageBox::information(this, "Information","Connection established");
            }
            else if (doc.object().value("type").toString()=="resultSelect")
            {
                QStandardItemModel* model = new QStandardItemModel(nullptr);
                model->setHorizontalHeaderLabels(QStringList()<<"list");

                QJsonArray docAr =  doc.object().value("result").toArray();
                for (int i=0; i< docAr.count();i++)
                {
                    QStandardItem* col = new QStandardItem(docAr[i].toObject().value("list").toString());
                    model->appendRow(col);
                }

                ui->tableView->setModel(model);
            }
            else
            {
                QMessageBox::information(this, "Information","Connection not established");
            }
        }
        else
        {
            QMessageBox::information(this, "Information","Data transfer format error"+docError.errorString());
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if (socket->isOpen())
    {
        socket->write("{\"type\":\"select\",\"params\":\"room\"}");
        socket->waitForBytesWritten(500);
    }
    else
    {
        QMessageBox::information(this,"Information","Connection not established");
    }
}
