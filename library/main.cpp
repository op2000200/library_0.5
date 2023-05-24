#include "helloscreen.h"
//#include <main.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloScreen *w;
    w = new HelloScreen;
    //q(w);
    w->showFullScreen();
    return a.exec();
}
