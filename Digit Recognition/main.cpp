#include "DigitRecognitionWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DigitRecognitionWindow w;
    w.show();
    return a.exec();
}
