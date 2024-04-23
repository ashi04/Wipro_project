#include <stdio.h>
#include<stdlib.h>
#include <string.h>
/*
void ptr
void *ptr; //generic pointers
*/
int main()
{
    char *outStr=NULL; //NULL

    char str1[]="Bhimashankar";
    char str2[]="Takalki";

    outStr = (char *)malloc(strlen(str1)+strlen(str2)+2);

    strcat(strcat(strcpy(outStr, str1)," "),str2);

    printf("\nStr1: %s\nStr2: %s\n",str1,str2);
    printf("\nOutString: %s",outStr);
    printf("\n\n");

    free(outStr);
    return 0;

}