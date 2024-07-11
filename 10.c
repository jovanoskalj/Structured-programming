#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main()
{
    wtf();
    FILE* f= fopen("podatoci.txt","r");
    char red[81],redzapecatenje[81],z1,z2;
    int pocetok,kraj;
    getchar();
    scanf ("%c%c",&z1,&z2);
    while ((fgets(red,81,f))!=NULL){
        for (int i=0;i<strlen(red);i++){
            if (red[i]==z1){
                pocetok=i+1;
                break;
            }
        }
        for (int i=0;i<strlen(red);i++){
            if (red[i]==z2){
                kraj=i;
                break;
            }
        }
        for(int i=pocetok;i<kraj;i++)
            printf("%c",red[i]);
        printf("\n");
    }
    fclose(f);
    return 0;
}