#include <stdio.h>
int main(){
    int x,m,n,a[100][100],i,j;
    scanf ("%d",&x);
    scanf ("%d %d",&m,&n);
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf ("%d",&a[i][j]);
        }
    }

    for ( i=0;i<m;i++){
        int suma=0;
        for (j=0;j<n;j++){
            suma+=a[i][j];
        }

        if (suma>x){
            for (j=0;j<n;j++){
                a[i][j]=1;
            }
        }
        if (suma<x){
            for (j=0;j<n;j++){
                a[i][j]= -1;
            }
        }
        if (suma==x){
            for (j=0;j<n;j++){
                a[i][j]=0;
            }
        }


    }

    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }

}