// triangle.c
#include <math.h>

float calculatePerimeter(float a, float b, float c) {
    return a + b + c;
}

float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
