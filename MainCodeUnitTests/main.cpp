#include <QCoreApplication>
#include <QTest>

#include "mathutilstester.h"

int main(int argc, char *argv[])
{
    MathUtilsTester m;

    QTest::qExec( &m );
}
