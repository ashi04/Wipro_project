#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ret,i,j,count;
    char str1[100], str2[100];
    char gString[100];
    int queries_items[256];
    int row1,row2;
    strcpy(gString, argv[1]);
    printf("\nGiven String: %s",gString);
    row1 = strlen(gString);
    for(i=0;i<255;i++)
        queries_items[i]=0;

    for(i=0;*(gString+i);i++)
        queries_items[*(gString+i)]++;
    printf("\n\n");
    for(i=0;i<255;i++){
        printf(" %d ",queries_items[i]);
    }
    
    
    

    printf("\n\n");

    return 0;
    
}