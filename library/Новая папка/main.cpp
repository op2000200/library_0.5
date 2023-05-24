#include "helloscreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloScreen w;
    w.show/*FullScreen*/();
    return a.exec();
}
