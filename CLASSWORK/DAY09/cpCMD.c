#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_BUFF 1000

int main(int argc, char *argv[])
{
    FILE *fptr1=NULL, *fptr2=NULL;
    char str1[MAX_BUFF] = {'\0',};
    
    char ch;
    if(argc != 3)
    {
        fprintf(stdout,"\nmin 2 args\n");
        fprintf(stdout,"\napp file1 file2\n");
        return 0;
    }

    fptr1 = fopen(argv[1], "r");
    if(fptr1 == NULL)
    {
        perror("fopen(): ");
        exit(0);
    }

    fptr2 = fopen(argv[2], "w+");
    if(fptr2 == NULL)
    {
        perror("fopen(): ");
        exit(0);
    }

    while((ch = fgetc(fptr1) )!= EOF)
    {
        fputc(ch,fptr2);
    }

    printf("\nFile Copying is Done!\n");
    return 0;

}