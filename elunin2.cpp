#include "elunin2.h"
#include <iostream>
using namespace std;

double work(double F, double s){
    return F * s;
}
double power(double A, double t){
    if (t == 0){
        cout << "Error: time cannot be null\n";
        return -1;
    }
    return A / t;
}
