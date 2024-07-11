#include <stdio.h>
#include <stdlib.h>

int poramnet(int a) {
    if (a == 0) {
        return 0;
    }
    int cifra = a % 10;
    if (cifra == 9) {
        cifra = 7;
    }
    return poramnet(a / 10) * 10 + cifra;
}

int main() {
    int a[100];
    int i, n = 0;


    while (scanf("%d", &a[n]) == 1) {
        a[n] = poramnet(a[n]);
        n++;
    }

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for (i = 0; i < n && i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}