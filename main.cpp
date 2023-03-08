 #include "datewidget.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QDebug>
#include <QApplication>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    qDebug()<<QSqlDatabase::drivers();
//    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
//    //db.setHostName("127.0.0.1");  //此处测试了下，用127.0.0.1，和远程的192.168.137.131.都使用的是ODBC配置的数据源地址。所有此函数不起作用。
//    db.setPort(3306);
//    db.setDatabaseName("MySQL");
//    db.setUserName("root");
//    db.setPassword("wjs123");
//    if (!db.open())
//       qDebug()<<"can't open!"<<db.lastError();
//    else
//         qDebug()<<"open!";
//    db.exec("use xm_data;");
//    QStringList tables = db.tables();
//       foreach(QString table, tables)
//           qDebug()<<table;
//    QSqlQuery result = db.exec("select pos_x from enemy;");   //注意，因为上面ODBC数据源配置时选择的是mysql这个自带系统库，所有可以访问user这个表。
// while (result.next())
//        qDebug() << result.value("pos_x").toString();
    datewidget w;
    w.show();
    return a.exec();
}
