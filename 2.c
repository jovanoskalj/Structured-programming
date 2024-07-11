#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int proverkacifra(int x){
    while(x>=10){
        x/=10;
    }
    return x;
}

int main()
{
    wtf();
    FILE *f = fopen("broevi.txt", "r");

    while(!feof(f)){
        int n,x;
        fscanf(f,"%d", &n);
        if(n==0) break;
        int max=0, maxN=0, cifra=0;
        for(int i=0;i<n;i++){
            fscanf(f,"%d", &x);

            cifra=proverkacifra(x);
            if(cifra>max){
                max=cifra;
                maxN=x;
            }
        }
        printf("%d\n",maxN);
    }


    fclose(f);

}