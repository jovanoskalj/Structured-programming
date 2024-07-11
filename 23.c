#include <stdio.h>
#include <math.h>

#define MAX 50

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

void wtf(){
    FILE *f=fopen("input.txt","w");

    int row,column,i,j;
    float el;
    scanf("%d %d", &row, &column);

    fprintf(f,"%d %d\n",row, column);

    for (i=0; i<row; ++i){
        for (j=0; j<column; ++j){
            scanf("%f", &el);
            fprintf(f, "%.2f ", el);
        }
        fputc('\n',f);
    }
    fclose(f);

    return;
}

int main(){
    wtf();
    // Your code starts here!

    // Your code ends here!
    printFile();

    return 0;
}
