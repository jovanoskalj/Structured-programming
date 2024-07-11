#include <stdio.h>
double cf(int n, int a[])
{
    if (n == 1)
        return a[0];
    else
        return a[0] + 1 / cf(n - 1, a + 1);
}

int main() {
    int n, i, coef[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &coef[i]);
    printf("%f\n", cf(n, coef));

    return 0;
}