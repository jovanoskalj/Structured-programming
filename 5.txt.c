#include <stdio.h>
#include <string.h>

void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    FILE *f = fopen("livce.txt", "r");
    char shifra[21],maxshifra[21];
    int tip,maxtip=0;
    double dobivka,maxdobivka=0;
    int n;
    double total=1;
    fscanf(f,"%d",&n);
    while ((fscanf(f,"%s%d%lf",shifra,&tip,&dobivka))!=EOF){
        total*=dobivka;
        if (dobivka>maxdobivka){
            maxdobivka=dobivka;
            strcpy(maxshifra,shifra);
            maxtip=tip;
        }

    }
    printf ("%s %d %.2lf\n%.2f",maxshifra,maxtip,maxdobivka,total*n);
    return 0;

}