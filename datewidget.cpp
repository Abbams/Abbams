#include "datewidget.h"
#include "ui_datewidget.h"
#include<QTimer>
#include<QLabel>
datewidget::datewidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::datewidget)
{
    ui->setupUi(this);
    QTimer *t=new QTimer(this);
    t->start(10);
    QLabel *ql=new QLabel(this);
    ql->setPixmap((QPixmap)"D:/QT/poject/VampireHunters/img/barrage.png");
    connect(t,&QTimer::timeout,[=](){
        ql->move(ql->pos()+(QPoint){1,1});
    });





}

datewidget::~datewidget()
{
    delete ui;
}

