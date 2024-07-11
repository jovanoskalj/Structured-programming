#include <stdio.h>
int par (int *a,int n){
    int brojac=0;
    int flag=1;
    int minimalen=0;
    for (int i=0;i<n;i++){
        brojac=0;
        for (int j=0;j<n;j++){
            if (a[i]==a[j]){
                brojac++;
            }
        }
        if (brojac%2==0 && brojac!=0){
            if (flag){
                minimalen=a[i];
                flag=0;
            }
            if (a[i]<minimalen){
                minimalen=a[i];
            }

        }
    }
    if (flag){
        return 0;
    }
    else{
        return minimalen;
    }
}

int main(){
    int n,a[100];
    scanf ("%d",&n);

    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    int res=par(a,n);
    if (res==0){
        printf ("Nitu eden element ne se pojavuva paren broj pati!");
    }
    else{
        printf ("Najmaliot element koj se pojavuva paren broj pati e %d",res);
    }
}