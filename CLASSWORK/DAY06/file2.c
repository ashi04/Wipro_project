/*
   1
  121
 12321

*/


#include <stdio.h>
#define alphaNum  49

int main()
{
    int i,j,k;
    int row;
    int n=5;
    char ch=alphaNum;

    for(row=0;row<n;row++)
    {
        for(i=n-1;i>row;i--)
        {
            printf(" ");
        }
        for(j=0, ch=alphaNum;j<=row;j++,ch++)
        {
            printf("%c",ch);
        }
        
        ch--;
        for(k=row, --ch;k>0;k--,ch--)
        {
            printf("%c",ch);
        }
        
        printf("\n");
    }
    printf("\n\n");
    return 0;
}