#include "MainWindow.h"
#include "ffmpeg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    ffmpeg_init();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
