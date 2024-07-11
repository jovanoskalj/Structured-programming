#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    int n,a[100][100];
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=0;j<n*2;j++){
            scanf ("%d",&a[i][j]);
        }
    }
    int b[100][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            b[i][j]=a[i][j];

        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n*2;j++){
            b[n+i][j-n]=a[i][j];
        }
    }

    for (int i=0;i<n*2;i++){
        for (int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf ("\n");
    }

}