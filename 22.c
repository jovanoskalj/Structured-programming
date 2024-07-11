#include <stdio.h>
void printFile() {
    FILE *f=fopen("matrica.txt","r");
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
    int m,n,r,k,a[100][100];
    scanf ("%d %d",&m,&n);
    scanf ("%d %d",&r,&k);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int min=1000;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (a[i][j]<min){
                min=a[i][j];
            }
        }
    }

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (i<r && j<k){
                a[i][j]=min;
            }
        }

    }


    FILE *f=fopen("matrica.txt","w");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            fprintf(f,"%d " ,a[i][j]);
        }
        fprintf (f,"\n");
    }
    fclose(f);
    printFile();
    return 0;
}