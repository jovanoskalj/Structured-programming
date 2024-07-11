#include <stdio.h>
#include <string.h>
#include <ctype.h>
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int main(){
    wtf();
    FILE *f = fopen("dat.txt", "r");
    char red[101],najdolgred[101];
    int index1,index2,maxred=0;
    while ((fgets(red,101,f))!=NULL){
        for (int i=0;i<strlen(red);i++){ //da se najdit prvata cifra
            if (isdigit(red[i])){
                index1=i;
                break;
            }
        }
        for (int i=strlen(red);i>=0;i--){ //da se najdit poslednata cifra
            if (isdigit(red[i])){
                index2=i;
                break;
            }
        }
        if ((index2-index1>=maxred)){ //za da se zemit posledniot najgolem
            maxred=index2-index1; //vaka se naogjat najdolg red
            strcpy(najdolgred,red+index1); //za da pocnit od prvata cifra
            najdolgred[index2+1]='\0'; // za da zavrsit na poslednata cifra
        }
    }
    puts(najdolgred);
}