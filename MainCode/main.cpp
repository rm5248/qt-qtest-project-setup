#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int maincode_main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Starting up maincode!";

    return a.exec();
}
