#include <stdio.h>
int main(){
    int n;
    float a[100][100];
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%f",&a[i][j]);
        }
    }
    float x=0, y=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i>j){
                x+=a[i][j];
            }
            if (i+j>n-1){
                y+=a[i][j];
            }
        }
    }
    float b[100][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i==j && i+j==n-1){
                b[i][j]=x+y;
            }
            else if (i==j){
                b[i][j]=x;
            }
            else if (i+j==n-1){
                b[i][j]=y;
            }

            else{
                b[i][j]=0;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf ("%.1f ",b[i][j]);
        }
        printf  ("\n");
    }
}
