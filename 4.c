#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    if((x==0&&y==0)||(x==0&&y==n-1)||(x==m-1&&y==0))
    {
        printf("0");
        return 0;
    }
    int s1,s2,s3,s4;
    s1=s2=s3=s4=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=x&&j<y)
                s1+=mat[i][j];
            else if(i<x&&j<y)
                s2+=mat[i][j];
            else if(i>=x&&j>=y)
                s4+=mat[i][j];
            else
                s3+=mat[i][j];
        }
    }
    printf("%d %d %d %d",s3,s2,s1,s4);
    return 0;
}