#ifndef DATASOURCE_H
#define DATASOURCE_H

#include <QFile>
#include "RoundedDouble.h"
//-------------------------------------------------------------------
extern int tea; // Объявление глобальной переменной
//-------------------------------------------------------------------
class DataSource : public QObject
{
    Q_OBJECT

    QString databaseFilename;
    QString labelsFilename;
    int vectorDimension; // векторИзмерение ? наверное величина вектора
   //extern
    int trainingExamplesAmount;
    int classesAmount;
    QFile* dataFile;
    QFile* labelFile;
    RoundedDouble* data;
    int* label_arr;
    RoundedDouble label;

public:
 //int trainingExamplesAmount;
    explicit DataSource(int outputDimension,int classes, QObject *parent = 0);
    ~DataSource();

    bool setDataFilename(QString filename);
    bool setLabelFilename(QString filename);
    RoundedDouble* getData(int) const;
    RoundedDouble getLabel(int);
    int* getLabelAsArray(int param);

    int getTrainingExampleAmount() const;
    int getVectorDimension() const;
    int getClassesAmount() const;
signals:

public slots:
};

#endif // DATASOURCE_H
