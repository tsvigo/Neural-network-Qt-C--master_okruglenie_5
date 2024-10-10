#include "mainview.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QScrollArea>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
QGuiApplication::setWindowIcon(QIcon("/home/newuser/my_projects_qt_2/Neural-network-Qt-C--master_okruglenie_2/icons/icon_64x64.png"));

    MainView wgt(NULL);

    wgt.show();

    return a.exec();
}
