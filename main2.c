#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4

void findElementsAndProduct(double matrix[M][N], double B, double *product) {
    double C[M * N];
    int count = 0;
    *product = 1;
    int hasElements = 0;
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] < B) {
                C[count++] = matrix[i][j];
                *product *= matrix[i][j];
                hasElements = 1;
            }
        }
    }
    
    printf("Елементи масиву C (менші за %.2lf):\n", B);
    for (int i = 0; i < count; i++) {
        printf("%.2lf ", C[i]);
    }
    printf("\n");
    if (!hasElements) {
        *product = 0;
    }
}

int main() {
    system("chcp 65001");
    double matrix[M][N] = {
        {3.0, 6.5, 4.8, 1.2},
        {5.1, 2.3, 6.6, 7.4},
        {9.0, 5.4, 3.9, 0.5}
    };
    
    double B = 5.0;
    double product;
    findElementsAndProduct(matrix, B, &product);
    printf("Добуток елементів масиву C: %.2lf\n", product);
    return 0;
}