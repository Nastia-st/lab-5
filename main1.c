#include <stdio.h>
#include <stdlib.h>
#define N 3

void findMinElements(double matrix[N][N], double minElements[N]) {
    for (int i = 0; i < N; i++) {
        minElements[i] = matrix[i][0];
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] < minElements[i]) {
                minElements[i] = matrix[i][j];
            }
        }
    }
}

int main() {
    system("chcp 65001");
    double matrix[N][N] = {
        {3.2, 7.5, 4.8},
        {5.0, 2.3, 5.6},
        {9.0, 6.4, 3.9}
    };

    double minElements[N];
    findMinElements(matrix, minElements);
    printf("Найменші елементи кожного рядка:\n");
    for (int i = 0; i < N; i++) {
        printf("%lf\n", minElements[i]);
    }
    return 0;
}