#include "mainwindow.h"
#include <QApplication>
#include <ros/ros.h>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "qt_template");
    ros::NodeHandle nh;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
