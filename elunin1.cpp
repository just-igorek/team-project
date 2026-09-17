#include "elunin1.h"
#include <iostream>
using namespace std;

//1. Путь: s = v * t
double distance(double v, double t){
    return v * t;
}
//2. Скорость: v = s / t
double speed(double s, double t){
    if (t == 0){
        cout << "Error: time cannot be null\n";
        return -1;
    }
    return s / t;
}
//3. Время: t = s / v
double travelTime(double s, double v) {
    if (v == 0) {
        cout << "Error: Speed ​​cannot be zero\n";
        return -1;
    }
    return s / v;
}