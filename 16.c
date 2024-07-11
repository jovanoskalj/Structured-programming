#include <stdio.h>
int maksimalna (int broj,int max){
    int cifra=broj%10;
    if (broj==0){
        return max;
    }
    if (cifra>max){
        max=cifra;
        return maksimalna (broj/10,max);
    }
    return maksimalna (broj/10,max);
}
int main(){
    int broj;
    while (scanf("%d",&broj)){
        printf ("%d\n",maksimalna(broj,0));
    }
}