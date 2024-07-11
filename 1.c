
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}
int proverka(char c){
    c=tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='u' || c=='o'){
           return 1;
    }
    return 0;
}

int main() {

  writeToFile();
    FILE *f = fopen("text.txt", "r");
    char c;
    char prethodna='z';
    int brojac=0;
  while((c=fgetc(f))!=EOF){
        c=tolower(c);
    if(proverka(c)&&proverka(prethodna)){
        printf ("%c%c\n",prethodna,c);
        brojac++;
    }
    prethodna=c;
    }
   printf ("%d",brojac);
    fclose(f);
  return 0;
}
