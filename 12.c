#include <stdio.h>
int BrojPozitivni(int *a, int n){
    if (n<0){
        return 0;
    }
    if (a[n]>0){
        return 1+ BrojPozitivni(a,n-1);
    }
    return BrojPozitivni(a,n-1);
}
int main(){
    int n,a[100];
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf ("%d",BrojPozitivni(a,n-1));
}