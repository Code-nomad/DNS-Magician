#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <IOstream>
#include <Qprocess>
#include <interfacequery.h>
#include <QDebug>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    interfaceQuery interfaceobject;
    QStringList populate = interfaceobject.getnames();
    ui->InterfaceSelect->addItems(populate);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_SetCustomDNS_clicked()
{
    QString serveradres1= ui->Server1->text();
    QString serveradres2= ui->Server2->text();
    QProcess process;
    QString cmd;
    QString cmdinterface;


    cmdinterface = ui->InterfaceSelect->currentText();
    cmd = QString("netsh interface ipv4 add dnsserver \"%1\" address=%2 index=1").arg(cmdinterface, serveradres1);
    process.start(cmd);
    process.waitForFinished();
    //
    //
    cmd = QString("netsh interface ipv4 add dnsserver \"%1\" address=%2 index=2").arg(cmdinterface, serveradres2);
    process.start(cmd);
    process.waitForFinished();



}

void Widget::on_SetDHCP_clicked()
{

    QProcess process;
    QString cmd;
    QString cmdinterface;

    cmdinterface = ui->InterfaceSelect->currentText();
    qDebug() << cmdinterface;
    cmd = QString("netsh interface ipv4 set dns \"%1\" dhcp").arg(cmdinterface);
    process.start(cmd);
    process.waitForFinished();

}
