#ifndef DATEWIDGET_H
#define DATEWIDGET_H

#include <QWidget>
#include <QSqlDatabase>
QT_BEGIN_NAMESPACE
namespace Ui { class datewidget; }
QT_END_NAMESPACE

class datewidget : public QWidget
{
    Q_OBJECT

public:
    datewidget(QWidget *parent = nullptr);
    ~datewidget();

private:
    Ui::datewidget *ui;
};
#endif // DATEWIDGET_H
