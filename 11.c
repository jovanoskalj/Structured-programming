#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    FILE* dat=fopen("input.txt","r");
    char red[101],broevi[101]={'0'};
    int counter;
    while(fgets(red,101,dat)!=NULL)
    {
        counter=0;
        for(int i=0;i<strlen(red);i++)
        {
            if(isdigit(red[i]))
            {
                broevi[counter]=red[i];
                counter++;

            }
        }
        broevi[counter]='\0';
        for(int i=0;i<counter-1;i++)
        {
            for(int j=i+1;j<counter;j++)
            {
                if(broevi[i]>broevi[j])
                {
                    char temp=broevi[i];
                    broevi[i]=broevi[j];
                    broevi[j]=temp;
                }
            }
        }
        printf("%d:%s\n",counter,broevi);

    }
    fclose(dat);
    return 0;
}