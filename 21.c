#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int n,br=0;
    scanf ("%d",&n);
    char red[51], podniza[]={"a1c"};
    for (int i=0;i<n;i++){
        br=0;
        scanf ("%s", red);
        for (int i=0;i<strlen(red)-2;i++){
            if (tolower(red[i])=='a'&& tolower(red[i+1])=='1'&& tolower(red[i+2])=='c') {
                br++;
            }
        }
        if (br>=2){
            for(int j=0;j<strlen(red);j++)
                printf("%c",tolower(red[j]));
            printf("\n");
        }
    }
}