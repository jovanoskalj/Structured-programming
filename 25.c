#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void premesti(int *a,int n){
    int nova[100],br=0;
    for (int i=0;i<n;i++){
        if (a[i]>=0){
            nova[br++]=a[i];
        }
    }
    for (int i=0;i<n;i++){
        if (a[i]<0){
            nova[br++]=a[i];
        }
    }
    for (int i=0;i<n;i++){
        a[i]=nova[i];
    }

}
int main(){
    int n,a[100];
    scanf ("%d",&n);

    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    premesti (a,n);

    for (int i=0;i<n;i++){
        printf ("%d ",a[i]);
    }
}