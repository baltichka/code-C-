// lab4.c
#include <stdio.h>
#include <locale.h>
#include "triangle.h"

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    float a, b, c;

    printf("Введите длины трех сторон треугольника: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        float perimeter = calculatePerimeter(a, b, c);
        float area = calculateArea(a, b, c);

        printf("Периметр треугольника: %.2f\n", perimeter);
        printf("Площадь треугольника: %.2f\n", area);
        system("pause");
    } else {
        printf("Треугольник с такими сторонами не существует\n");
        system("pause");
    }   
    return 0;
}