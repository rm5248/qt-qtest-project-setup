#ifndef MATHUTILSTESTER_H
#define MATHUTILSTESTER_H

#include <QObject>

#include "mathutilities.h"

class MathUtilsTester : public QObject
{
    Q_OBJECT
public:
    explicit MathUtilsTester(QObject *parent = 0);

signals:

private slots:
    void initTestCase();   
    void testadd_data();
    void testadd();
    void subtract_data();
    void subtract();
    void cleanupTestCase();

private:
    MathUtilities* mathUtils;
};

#endif // MATHUTILSTESTER_H
