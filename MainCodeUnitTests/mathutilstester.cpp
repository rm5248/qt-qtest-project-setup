#include <QTest>

#include "mathutilstester.h"

MathUtilsTester::MathUtilsTester(QObject *parent) : QObject(parent)
{

}

void MathUtilsTester::initTestCase(){
    mathUtils = new MathUtilities( this );
}

void MathUtilsTester::testadd_data(){
    QTest::addColumn<int>( "first" );
    QTest::addColumn<int>( "second" );

    QTest::newRow( "First check" ) << 5 << 6;
    QTest::newRow( "Second Check" ) << 10 << 1;
}

void MathUtilsTester::testadd(){
    QFETCH(int, first);
    QFETCH(int, second);

    QCOMPARE( mathUtils->add(first,second), 11 );
}

void MathUtilsTester::subtract_data(){
    QTest::addColumn<int>( "first" );
    QTest::addColumn<int>( "second" );

    QTest::newRow( "First check" ) << 10 << 5;
    QTest::newRow( "Second Check" ) << 8 << 3;
}

void MathUtilsTester::subtract(){
    QFETCH(int, first);
    QFETCH(int, second);

    QCOMPARE( mathUtils->subtract(first,second), 5 );
}

void MathUtilsTester::cleanupTestCase(){
    QCOMPARE( mathUtils->getNumberOfTimesAdded(), 2 );
}
