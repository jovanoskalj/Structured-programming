#include <stdio.h>
int sum_pos (int *a,int ind,int n){
    int suma=0;
    if (ind>=n){
        return 0;
    }
    for (int i=ind;ind<n;ind++){
        suma+=a[ind];
    }
    return suma;
}
int main(){
    int n,ind,a[100];
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    scanf ("%d",&ind);
    printf ("%d", sum_pos(a,ind,n));
}