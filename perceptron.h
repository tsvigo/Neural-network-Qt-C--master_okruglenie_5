#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <QWidget>
#include <QScrollArea>
#include <QDebug>
#include <QtMath>
#include "layer.h"
#include "datasource.h"

class Perceptron : public QWidget
{
    Q_OBJECT

    QVBoxLayout layout;
    DataSource* dataSrc;
    RoundedDouble lamda;

public:
    QVector<Layer*> layer;

    explicit Perceptron(int inputNumber,QWidget *parent = 0);
    explicit Perceptron(QWidget *parent = 0);
    ~Perceptron();

    void addLayer(int inputNumber);


    const RoundedDouble *getOutput();
    DataSource *getDataSrc() const;
    void setDataSrc(DataSource *value);
    int getTrainigSetNumber();
    int getClassesAmount();

    void calculateDelta(int index);
    void setInput(RoundedDouble* , int);
    RoundedDouble cost();
    void resetDerivatives();
    int getAnswer();


signals:
    void statCost(int);
    void calculateForExample(int);

public slots:
    void gradientDescent();
    void slot_cost();
    void saveAll();
    void loadAll();
    void removeLastLayer();
    void uiRefresh();
protected:
};
//-------------------------------------------------------------------
class ActivationFunction {
public:
    virtual RoundedDouble function(RoundedDouble x) const = 0;
    virtual RoundedDouble derivative(RoundedDouble x) const = 0;
};
//-------------------------------------------------------------------
class Sigmoid : public ActivationFunction {
public:
    RoundedDouble function(RoundedDouble x) const override {
        return 1.0 / (1.0 + exp(-x));
    }
    RoundedDouble derivative(double x) const override {
        RoundedDouble fx = function(x);
        return fx * (1 - fx);
    }
};

#endif // PERCEPTRON_H
