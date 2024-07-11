#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int m, n, a[100][100];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        int suma1 = 0, suma2 = 0;
        if (n % 2 == 0) {
            for (int j = 0; j < n / 2; j++) {
                suma1 += a[i][j];
                suma2 += a[i][n / 2 + j];
            }
            int suma = abs(suma1 - suma2);
            a[i][n / 2 - 1] = a[i][n / 2] = suma;
        } else {
            for (int j = 0; j < n / 2; j++) {
                suma1 += a[i][j];
                suma2 += a[i][n / 2 + j + 1];
            }
            int suma = abs(suma1 - suma2);
            a[i][n / 2] = suma;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}