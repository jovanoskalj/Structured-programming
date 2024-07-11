#include <stdio.h>
#include <string.h>
#include <ctype.h>
int svrznici (char *red){
    int br=0,brsv=0;
    for (int i=0;i<strlen(red);i++){
        if (isalpha(red[i])){
            br++;
        }
        else{
            if (br<=3 && br!=0){
                brsv++;

            }
            br=0;
        }

    }
    return brsv;
}
int main(){
    char red[101];
    int brsvrznici, maxsvrznici=0;
    char najmnogu[101];
    while (fgets (red,101,stdin)){
        brsvrznici=svrznici(red);
        if (brsvrznici>maxsvrznici){
            maxsvrznici=brsvrznici;
            strcpy (najmnogu,red);
        }
    }
    printf ("%d: %s",maxsvrznici,najmnogu);
}