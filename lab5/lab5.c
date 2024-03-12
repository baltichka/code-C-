#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "matrix.h"

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    printf("Введите размерность матриц: ");
    scanf("%d", &n);

    double *matrix1 = (double *)malloc(n * n * sizeof(double));
    double *matrix2 = (double *)malloc(n * n * sizeof(double));

    printf("Введите элементы первой матрицы: ");
    for (int i = 0; i < n * n; i++) {
        scanf("%lf", &matrix1[i]);
    }

    printf("Введите элементы второй матрицы: ");
    for (int i = 0; i < n * n; i++) {
        scanf("%lf", &matrix2[i]);
    }

    char operation;
    printf("Введите знак операции (+, -, *): ");
    scanf(" %c", &operation);

    double* result = matrixOperation(matrix1, matrix2, n, operation);
    if (result != NULL) {
        printf("Результат операции:\n");
        for (int i = 0; i < n * n; i++) {
            if (i != 0 && i % n == 0) {
                printf("\n");
            }
            printf("%.2f ", result[i]);
        }
        free(result);
    }

    system("pause");
    free(matrix1);
    free(matrix2);
    return 0;
}