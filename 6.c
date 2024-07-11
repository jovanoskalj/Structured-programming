#include <stdio.h>
int main(){
    int m,n,a[100][100],brojac=0;
    scanf ("%d %d",&m,&n);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf ("%d",&a[i][j]);
        }
    }

    for (int j=0;j<n;j++){
        for (int i=0;i<m-2;i++){
            if (a[i][j]==1 && a[i+1][j]==1 && a[i+2][j]==1){
                brojac++;
                break;
            }
        }
    }

    {
        for (int i=0;i<m;i++){
            for (int j=0;j<n-2;j++){
                if (a[i][j]==1 && a[i][j+1]== 1 && a[i][j+2]==1){
                    brojac++;
                    break;
                }

            }
        }
        printf("%d",brojac);
    }
}