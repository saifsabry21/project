#ifndef CONVERSIONWINDOW_H
#define CONVERSIONWINDOW_H

#include <QDialog>

namespace Ui {
class ConversionWindow;
}

class ConversionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ConversionWindow(QWidget *parent = nullptr);
    ~ConversionWindow();

private:
    Ui::ConversionWindow *ui;
};

#endif // CONVERSIONWINDOW_H
