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
    int n,m,br=0;
    fscanf(f,"%d%d",&n,&m);
    int a[n][m];

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            fscanf(f,"%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        br=0;
        for (int j=0;j<m;j++){
            if ((i+j)%2==0 && a[i][j]%2==0){
                br++;
            }
            else if ((i+j)%2!=0 && a[i][j]%2!=0){
                br++;
            }
        }
        printf ("%d: %d\n",i,br);
    }





    fclose (f);
    return 0;
}