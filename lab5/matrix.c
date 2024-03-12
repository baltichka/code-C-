#include <stdlib.h>
#include <stdio.h>

double *matrixOperation(double *matrix1, double *matrix2, int n, char operation) {
    double *result = (double *)malloc(n * n * sizeof(double));
    if (result == NULL) {
        printf("Ошибка выделения памяти");
        return NULL;
    }

    for (int i = 0; i < n * n; i++) {
        switch (operation) {
            case '+':
                result[i] = matrix1[i] + matrix2[i];
                break;
            case '-':
                result[i] = matrix1[i] - matrix2[i];
                break;
            case '*':
                result[i] = matrix1[i] * matrix2[i];
                break;
            default:
                printf("Неверная операция\n");
                free(result);
                return NULL;
        }
    }

    return result;
}