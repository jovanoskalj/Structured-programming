#include<stdio.h>
#include<ctype.h>
#include<string.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f = fopen("matrica.txt", "r");
    int n,m;
    fscanf (f,"%d %d",&n,&m);
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            fscanf(f,"%d",&a[i][j]);
        }
    }
    int br;
    for (int j=0;j<m;j++){
        br=0;
        for (int i=0;i<n;i++){
            if(j<10){
                if (i*10+j==a[i][j]){
                    br++;
                }
            }

            else if(j<100){
                if (i*100+j==a[i][j]){
                    br++;
                }
            }
            else {
                if (i*1000+j==a[i][j]){
                    br++;
                }
            }

        }
        printf ("%d\n",br);
    }


    fclose (f);
    return 0;
}