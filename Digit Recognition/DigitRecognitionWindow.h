#ifndef DIGITRECOGNITIONWINDOW_H
#define DIGITRECOGNITIONWINDOW_H

#include <QtWidgets/QWidget>
#include "ui_DigitRecognitionWindow.h"

class DigitRecognitionWindow : public QWidget
{
    Q_OBJECT

public:
    DigitRecognitionWindow(QWidget *parent = 0);
    ~DigitRecognitionWindow();

private:
    Ui::DigitRecognitionWindowClass ui;
};

#endif // DIGITRECOGNITIONWINDOW_H
