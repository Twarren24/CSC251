#include "tuple.h"

unsigned int is_point(Tuple t) {
    if(t.w == 1)
        return 1;
    else
        return 0;
}

unsigned int is_vector(Tuple t) {
    if(t.w == 0)
        return 1;
    else
        return 0;
}

//testTupleVector
Tuple tuple(double x, double y, double z, double w) {
    Tuple t;
    t.x = x;
    t.y = y;
    t.z = z;
    t.w = w;
    return t;
}

//testPointCreate
Tuple point(double x, double y, double z) {
    Tuple t;
    t.x = x;
    t.y = y;
    t.z = z;
    t.w = 1.0; 
    return t;
}

//testVectorCreate
Tuple vector(double x, double y, double z) {
    Tuple t;
    t.x = x;
    t.y = y;
    t.z = z;
    t.w = 0.0; 
    return t;
}

//testAddTuples
 Tuple addTuples(Tuple a, Tuple b) {
    Tuple result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    result.w = a.w + b.w;
    return result;
}
//testSubtractPoints
Tuple subTuples(Tuple a, Tuple b){
    Tuple result;
    result.x=a.x - b.x;
    result.y=a.y - b.y;
    result.z=a.z - b.z;
    result.w=a.w-b.w;
    return result;

}

//testSubtractorVactorsFromPoint
Tuple SubtractorVectorFromPoint(Tuple p, Tuple v){
    Tuple result;
    result.x = p.x - v.x;
    result.y = p.y - v.y;
    result.z = p.z - v.z;
    result.w = p.w;
    return result; 
}

//testSubtractTwoVectors
Tuple SubtractTwoVectors(Tuple a, Tuple b){
    Tuple result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    result.w = b.w;
    return result;
}

//testSubtractorFromZeroVector
Tuple SubtractVectorFromZeroVector(Tuple zero, Tuple b){
    Tuple result;
    result.x = 0 - b.x;
    result.y = 0 - b.y;
    result.z = 0 - b.z;
    result.w = b.w;
    return result;
}

//testNegateTuple
Tuple negateTuple(Tuple a){
    Tuple result;
    result.x = a.x * -1.0;
    result.y = a.y * -1.0;
    result.z = a.z * -1.0;
    result.w = a.w * -1.0;
    return result;
}

//testMultiplyTupleByScalar
Tuple  scalarMultTuple(double s , Tuple a){
  Tuple result;
    result.x = a.x * s;
    result.y = a.y * s;
    result.z = a.z * s;
    result.w = a.w * s;
    return result;
      
}

// testMultiplyTupleByFraction
Tuple MultiplyTupleByFraction (Tuple a, double f){
    Tuple result;
    result.x = a.x * f;
    result.y = a.y * f;
    result.z = a.z * f;
    result.w = a.w * f;
    return result;
}

//testDivideTupleByScalar
Tuple scalarDivideTuple(Tuple a, double f){
    Tuple result;
    result.x = a.x / f;
    result.y = a.y / f;
    result.z = a.z / f;
    result.w = a.w / f;
    return result;
}
//testtestMagnitudeOfVector1
double magnitudeOfVector(Tuple a) {
    double magnitudeSquared = a.x * a.x + a.y * a.y + a.z * a.z;
    double magnitude = sqrt(magnitudeSquared);
    return magnitude;
}