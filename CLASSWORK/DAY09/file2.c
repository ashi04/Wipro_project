#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int ret=0;
    FILE *fptr = NULL;
    fptr = fopen("test2.txt", "w+");

    if(fptr == NULL)
    {
        printf("\nCheck the file name");
        return 0;
    }
    printf("\nFile Exists\n");
    ret = fprintf(fptr,"Bhima");
    if (ret < 0)
        printf("\nPlease check the mode of operation\n");
    
    printf("\nRet Value=%d",ret);

    return 0;
}