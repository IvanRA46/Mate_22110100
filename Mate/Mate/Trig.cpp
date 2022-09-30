#include "Trig.h"
#include <cmath>
#define PI 3.1415926536
#include <iostream>

using namespace std;
Trig::Trig(double x) {
	this->x = x;
}

void Trig::Ang(double x) {
    double rad, seno, coseno, tang;
    rad = x * PI / 180;
    seno = sin(rad);
    coseno = cos(rad);
    tang = tan(rad);
    cout << "El seno es: " << seno << "\n";
    cout << "El coseno es: " << coseno << "\n";
    cout << "La tangente es: " << tang << "\n";

}