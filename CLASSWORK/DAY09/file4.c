#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a=0;
    float b=0.0;
    char str1[100];
    char str2[100];
    FILE *fptr = NULL;
    fptr = fopen("test2.txt", "r+");

    if(fptr == NULL)
    {
        printf("\nCheck the file name");
        return 0;
    }
    printf("\nFile Exists \n");
    printf("\nfile pointer is @ %d location\n",ftell(fptr));
    fscanf(fptr,"%d %s %f",&a,str1,&b);
    printf("\nValues scaned from file %d\t%f\t%s\n",a,b,str1);
    printf("\nfile pointer is @ %d location\n",ftell(fptr));
    sprintf(str2,"\nValues scaned from file %d\t%f\t%s\n",a,b,str1);
    fprintf(fptr,"%s",str2);
    fclose(fptr);
    return 0;
}