#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int palindrom (char *niza){
    char *p=niza;
    char *k=niza+(strlen(niza)-1);
    while (p<k){
        if (tolower(*p)!=tolower(*k)){
            return 0;
        }

        k--;
        p++;
    }

    return 1;
}

int dalispecijalen(char *niza){
    for (int i=0;i<strlen(niza);i++){
        if (ispunct(niza[i])){
            return 1;
        }
    }

    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    char niza[81];
    int flag=0,maxdolzina=0;
    char maxniza[81];
    for (int i=0;i<n;i++){
        scanf ("%s",niza);
        if (palindrom(niza)&&dalispecijalen(niza)){

            if(strlen(niza)>maxdolzina){
                strcpy(maxniza,niza);
                maxdolzina=strlen(niza);
                flag=1;
            }
        }
    }
    if (flag){
        printf ("%s",maxniza);
    }
    else {
        printf ("Nema!");
    }


}