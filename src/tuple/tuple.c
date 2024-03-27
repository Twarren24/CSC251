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
