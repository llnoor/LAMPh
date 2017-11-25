#ifndef AUTHORIZATIONWINDOW_H
#define AUTHORIZATIONWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
/* Подключаем заголовочный файл для работы с информацией, которая помещена в базу данных */
#include "database.h"
#include <QTableView>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QGroupBox;
QT_END_NAMESPACE

class AuthorizationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AuthorizationWindow(QWidget *parent = 0);
    //~AuthorizationWindow();

private:

    DataBase        *db;
    QSqlTableModel  *model;
    QGroupBox *groupTable();
    QTableView *tableView_new;


private:
    /* Также присутствуют два метода, которые формируют модель
     * и внешний вид TableView
     * */
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
};

#endif // AUTHORIZATIONWINDOW_H