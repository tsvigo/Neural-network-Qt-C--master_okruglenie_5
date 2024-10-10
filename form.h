#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "RoundedDouble.h"
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    
private slots:
    void on_Form_destroyed();
        void onSpinBoxValueChanged(int value);
private:
    Ui::Form *ui;
    bool canClose;  // Переменная для контроля возможности закрытия окна
    RoundedDouble* roundedDouble;  // Экземпляр вашего класса
//-------------------------------------------------------------------    
    signals:
    void windowClosed();  // Сигнал, испускаемый при закрытии окна
    void decimalPlacesChanged(int value);  // Сигнал для изменения знаков после запятой
protected:
    void closeEvent(QCloseEvent *event) override;  // Объявление closeEvent
//-------------------------------------------------------------------
 
};

#endif // FORM_H
