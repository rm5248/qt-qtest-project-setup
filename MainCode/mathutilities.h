#ifndef MATHUTILITIES_H
#define MATHUTILITIES_H

#include <QObject>

class MathUtilities : public QObject
{
    Q_OBJECT
public:
    explicit MathUtilities(QObject *parent = 0);

    int add( int arg1, int arg2 );
    int subtract( int arg1, int arg2 );

    int getNumberOfTimesAdded();
    int getNumberOfTimesSubtracted();

signals:

public slots:
private:
    int numberOfTimesAdded;
    int numberOfTimesSubtracted;
};

#endif // MATHUTILITIES_H
