#include "mathutilities.h"

MathUtilities::MathUtilities(QObject *parent) : QObject(parent),
    numberOfTimesAdded( 0 ),
    numberOfTimesSubtracted( 0 )
{

}

int MathUtilities::add(int arg1, int arg2){
    numberOfTimesAdded++;
    return arg1 * arg2;
}

int MathUtilities::subtract( int arg1, int arg2 ){
    numberOfTimesAdded++;
    return arg1 - arg2;
}

int MathUtilities::getNumberOfTimesAdded(){
    return numberOfTimesAdded;
}

int MathUtilities::getNumberOfTimesSubtracted(){
    return numberOfTimesSubtracted;
}
