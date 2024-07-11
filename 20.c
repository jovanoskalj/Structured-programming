#include <stdio.h>
#include <math.h>
void printFile() {
    FILE *f=fopen("shema.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    int n,a[100][100],flag=0,brojac=1;
    scanf ("%d",&n);
    int dimenzija;
    dimenzija= (int) sqrt(n);
    if (dimenzija*dimenzija<n){
        dimenzija++;
    }
    int m=dimenzija;

    for (int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            a[i][j]=0;
        }
    }

    for (int j=0;j<m;j++){
        if (j%2==0){
            for (int i=0;i<m;i++){
                if (brojac-1==n||flag){
                    flag=1;
                    break;
                }
                a[i][j]=brojac++;
            }
        }
        else {
            for (int i=m-1;i>=0;i--){
                if (brojac-1==n||flag){
                    flag=1;
                    break;
                }
                a[i][j]=brojac++;
            }
        }
    }
    FILE *f=fopen("shema.txt","w");
    for (int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            fprintf(f,"%d ",a[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    printFile();

    return 0;
}