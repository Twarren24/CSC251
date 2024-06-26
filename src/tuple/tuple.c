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
//test MagnitudeOfVector1
double magnitudeOfVector1(Tuple a) {
    double magnitudeSquared = a.x * a.x + a.y * a.y + a.z * a.z;
    double magnitude = sqrt(magnitudeSquared);
    return magnitude;
}

double magnitudeOfVector2(Tuple a) {
    double magnitudeSquared = a.x * a.x + a.y * a.y + a.z * a.z;
    double magnitude = sqrt(magnitudeSquared);
    return magnitude;
}

double magnitudeOfVector3(Tuple a) {
    double magnitudeSquared = a.x * a.x + a.y * a.y + a.z * a.z;
    double magnitude = sqrt(magnitudeSquared);
    return magnitude;
}

double magnitudeOfVector4(Tuple a) {
    double magnitudeSquared = a.x * a.x + a.y * a.y + a.z * a.z;
    double magnitude = sqrt(magnitudeSquared);
    return magnitude;
}

double magnitudeOfVector5(Tuple a) {
    double magnitudeSquared = a.x * a.x + a.y * a.y + a.z * a.z;
    double magnitude = sqrt(magnitudeSquared);
    return magnitude;
}

Tuple NormalizeVector1(Tuple a) {
    double magnitudeSquared = a.x * a.x + a.y * a.y + a.z * a.z;
    double magnitude = sqrt(magnitudeSquared);
   } 
Tuple normalizeVector(Tuple v) {
    double magnitude = magnitudeOfVector(v);
    Tuple normalized;
    normalized.x = v.x / magnitude;
    normalized.y = v.y / magnitude;
    normalized.z = v.z / magnitude;
    normalized.w = v.w;
    return normalized;
}

Tuple normalizeVector2(Tuple v) {
    double magnitude = magnitudeOfVector(v);
    Tuple normalized;
    normalized.x = v.x / magnitude;
    normalized.y = v.y / magnitude;
    normalized.z = v.z / magnitude;
    normalized.w = v.w;
    return normalized;
}

//testMagnitudeOfVector
double magnitudeOfVector(Tuple a) {
    double magnitude = sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
    return magnitude;
}

//testDotProduct
double dotProduct(Tuple a, Tuple b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

// testColors
Color color(double r, double g, double b) {
    Color result;
    result.red = r;
    result.green = g;
    result.blue = b;
    return result;
}

//testAddingColors
Color addColors(Color a, Color b) {
    Color result;
    result.red = a.red + b.red;
    result.green = a.green + b.green;
    result.blue = a.blue + b.blue;
    return result;
}

//testSubtractingColors
Color subColors(Color a, Color b) {
    Color result;
    result.red = a.red - b.red;
    result.green = a.green - b.green;
    result.blue = a.blue - b.blue;
    return result;
}

//testMultColors1
Color scalarMultColor(double s, Color a){
    Color result;
    result.red = a.red * s;
    result.green = a.green * s;
    result.blue = a.blue * s;
    return result;
}

//testMultColors2
Color multColors(Color a, Color b) {
    Color result;
    result.red = a.red * b.red;
    result.green = a.green * b.green;
    result.blue = a.blue * b.blue;
    return result;
}