#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    sockfd = NULL;
    ui->lineEdit->setText("90");
    ui->lineEdit_2->setText("90");
    ui->lineEdit_3->setText("90");
    ui->lineEdit_4->setText("90");
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    unsigned char DataL = 0;
    unsigned char DataH = 0;

    unsigned char cmd[5] = {0xff, 0x02, 0x04};
    int num1 = ui->lineEdit->text().toInt();
    num1 -= 5;
    if(num1 < 0)
    {
        num1 = 0;
    }
    ui->lineEdit->setText(QString::number(num1));

    /*角度转脉冲数, 再获取脉冲数的高低字节, 最后封装到协议当中*/
    double temp = num1/5;
      int pulse = (int)(500+temp*55.55+0.5);
       DataL=pulse&0xff;
       DataH=pulse>>8;
      cmd[3] = DataL;
      cmd[4] = DataH;
    /*发送给服务器 sockfd->write*/
    sockfd->write((char*)cmd, 5);

}
void Widget::on_pushButton_2_clicked()
{
    unsigned char DataL = 0;
    unsigned char DataH = 0;

    unsigned char cmd[5] = {0xff, 0x02, 0x04};
    int num1 = ui->lineEdit->text().toInt();
    num1 += 5;
    if(num1 > 180)
    {
        num1 = 180;
    }
    ui->lineEdit->setText(QString::number(num1));

    /*角度转脉冲数, 再获取脉冲数的高低字节, 最后封装到协议当中*/
    double temp = num1/5;
      int pulse = (int)(500+temp*55.55+0.5);
       DataL=pulse&0xff;
       DataH=pulse>>8;
      cmd[3] = DataL;
      cmd[4] = DataH;


    /*发送给服务器 sockfd->write*/
    sockfd->write((char*)cmd, 5);
}

void Widget::on_pushButton_3_clicked()
{
    unsigned char DataL = 0;
    unsigned char DataH = 0;

    unsigned char cmd[5] = {0xff, 0x02, 0x05};
    int num1 = ui->lineEdit_2->text().toInt();
    num1 -= 5;
    if(num1 < 0)
    {
        num1 = 0;
    }
    ui->lineEdit_2->setText(QString::number(num1));
    /*角度转脉冲数, 再获取脉冲数的高低字节, 最后封装到协议当中*/
    double temp = num1/5;
      int pulse = (int)(500+temp*55.55+0.5);
       DataL=pulse&0xff;
       DataH=pulse>>8;

    cmd[3] = DataL;
    cmd[4] = DataH;
    /*发送给服务器 sockfd->write*/
    sockfd->write((char*)cmd, 5);
}
void Widget::on_pushButton_4_clicked()
{
    unsigned char DataL = 0;
    unsigned char DataH = 0;

    unsigned char cmd[5] = {0xff, 0x02, 0x05};
    int num1 = ui->lineEdit_2->text().toInt();
    num1 += 5;
    if(num1 > 180)
    {
        num1 = 180;
    }
    ui->lineEdit_2->setText(QString::number(num1));

    /*角度转脉冲数, 再获取脉冲数的高低字节, 最后封装到协议当中*/
    double temp = num1/5;
      int pulse = (int)(500+temp*55.55+0.5);
       DataL=pulse&0xff;
       DataH=pulse>>8;

    cmd[3] = DataL;
    cmd[4] = DataH;

    /*发送给服务器 sockfd->write*/
    sockfd->write((char*)cmd, 5);
}

void Widget::on_pushButton_5_clicked()
{
    unsigned char DataL = 0;
        unsigned char DataH = 0;

        unsigned char cmd[5] = {0xff, 0x02, 0x06};
        int num1 = ui->lineEdit_3->text().toInt();
        num1 -= 5;
        if(num1 < 0)
        {
            num1 = 0;
        }
        ui->lineEdit_3->setText(QString::number(num1));
        /*角度转脉冲数, 再获取脉冲数的高低字节, 最后封装到协议当中*/
        double temp = num1/5;
          int pulse = (int)(500+temp*55.55+0.5);
           DataL=pulse&0xff;
           DataH=pulse>>8;

        cmd[3] = DataL;
        cmd[4] = DataH;
        /*发送给服务器 sockfd->write*/
        sockfd->write((char*)cmd, 5);
    }
    void Widget::on_pushButton_6_clicked()
    {
        unsigned char DataL = 0;
        unsigned char DataH = 0;

        unsigned char cmd[5] = {0xff, 0x02, 0x06};
        int num1 = ui->lineEdit_3->text().toInt();
        num1 += 5;
        if(num1 > 180)
        {
            num1 = 180;
        }
        ui->lineEdit_3->setText(QString::number(num1));

        /*角度转脉冲数, 再获取脉冲数的高低字节, 最后封装到协议当中*/
        double temp = num1/5;
          int pulse = (int)(500+temp*55.55+0.5);
           DataL=pulse&0xff;
           DataH=pulse>>8;

        cmd[3] = DataL;
        cmd[4] = DataH;

        /*发送给服务器 sockfd->write*/
        sockfd->write((char*)cmd, 5);
}
    void Widget::on_pushButton_7_clicked()
    {
        unsigned char DataL = 0;
            unsigned char DataH = 0;

            unsigned char cmd[5] = {0xff, 0x02, 0x07};
            int num1 = ui->lineEdit_4->text().toInt();
            num1 -= 5;
            if(num1 < 0)
            {
                num1 = 0;
            }
            ui->lineEdit_4->setText(QString::number(num1));

            /*角度转脉冲数, 再获取脉冲数的高低字节, 最后封装到协议当中*/
            double temp = num1/5;
              int pulse = (int)(500+temp*55.55+0.5);
               DataL=pulse&0xff;
               DataH=pulse>>8;

            cmd[3] = DataL;
            cmd[4] = DataH;

            /*发送给服务器 sockfd->write*/
            sockfd->write((char*)cmd, 5);
    }
void Widget::on_pushButton_8_clicked()
    {
        unsigned char DataL = 0;
            unsigned char DataH = 0;

            unsigned char cmd[5] = {0xff, 0x02, 0x07};
            int num1 = ui->lineEdit_4->text().toInt();
            num1 += 5;
            if(num1 > 180)
            {
                num1 = 180;
            }
            ui->lineEdit_4->setText(QString::number(num1));
            /*角度转脉冲数, 再获取脉冲数的高低字节, 最后封装到协议当中*/
            double temp = num1/5;
              int pulse = (int)(500+temp*55.55+0.5);
               DataL=pulse&0xff;
               DataH=pulse>>8;
            cmd[3] = DataL;
            cmd[4] = DataH;
            /*发送给服务器 sockfd->write*/
            sockfd->write((char*)cmd, 5);
        }


void Widget::on_pushButton_13_clicked()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_13->setEnabled(false);
    if(sockfd == NULL)
    {
        sockfd = new QTcpSocket;
        sockfd->connectToHost("192.168.150.130", 8888);
                if(sockfd->state() == QAbstractSocket::UnconnectedState)
                {
                    QMessageBox::about(this, "提示", "未连接成功!请检查服务器!");
                }
                else
                {
                    QMessageBox::about(this, "提示", "连接成功!!!");
                    ui->pushButton_13->setEnabled(false);
                }
    }
}












