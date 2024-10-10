#include "form.h"
#include "mainview.h"
#include "ui_form.h"
#include <QCloseEvent>     // Добавляем включение QCloseEvent
#include <QMessageBox>
#include "datasource.h"
//-------------------------------------------------------------------
//extern int tea;
QString filename2="";
//ui->QSpinBox
int peredacha_decimalPlaces;
//-------------------------------------------------------------------
Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form),
     canClose(
     //false
     true
     )
{
    ui->setupUi(this);
  //  MainView 
//    Form *form = new Form(this);

 //  connect(Form, &Form::windowClosed, this, &MainView::unlockButton);
 QString text = QString::number(tea); // Преобразуем число в строку
 //ui->label->text()="trainingExamplesAmount = "+text;
 //ui->label->setText(text);               // Устанавливаем текст в метку
 ui->label->setText("trainingExamplesAmount = " + text); // Конкатенация строк
 //ui->label->repaint();
//-------------------------------------------------------------------
ui->label_2->setText( filename2);
//-------------------------------------------------------------------
// Подключаем сигнал изменения значения QSpinBox к нашему слоту
//connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(onSpinBoxValueChanged(int)));
ui->spinBox->setValue(peredacha_decimalPlaces);
}

Form::~Form()
{

    delete ui;
}

void Form::on_Form_destroyed()
{
    
}

void Form::closeEvent(QCloseEvent *event) {
    emit windowClosed();  // Испускаем сигнал при закрытии окна
    event->accept();  // Подтверждаем закрытие
     if (!canClose) {  // Если закрытие не разрешено
        // Показать предупреждение или просто игнорировать запрос на закрытие
        QMessageBox::warning(this, "Закрытие заблокировано", "Вы не можете закрыть окно!");

        event->ignore();  // Игнорируем событие закрытия
    } else {
        event->accept();  // Разрешаем закрытие, если canClose == true
    }
//-------------------------------------------------------------------


}

void Form::onSpinBoxValueChanged(int value) {
    emit decimalPlacesChanged(value);  // Отправляем сигнал изменения знаков после запятой
}
   
