#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int ret=0;
    char str1[20];
    char str2[20];
    char str3[40]={'\0',};
    // scanf("%s%s",str1,str2);
    if (argc !=3)
    {
        printf("\nmin 2 args need to be supplied\n");
        printf("\n./app str1 str2\n");
        return 0;
    }
    strcpy(str1,argv[1]);
    strcpy(str2,argv[2]);

    // strcpy(str2,str1);
    // strncpy(str2,str1,5);

    printf("\nString length of str1 = %d",strlen(str1));
    printf("\nSizeof str1 = %d",sizeof(str1));

    printf("\nString length of str2 = %d",strlen(str2));
    printf("\nSizeof str2 = %d",sizeof(str2));
    printf("\n%s\t%s",str1,str2);

    ret = strcmp(str1,str2);
    printf("\nret = %d\n",ret);
    strcat(strcat(str3,str1),str2);
    // strcat(str3,str2);
    printf("\nstr1: %s\tstr2: %s\tstr3:%s",str1,str2,str3);


    printf("\n\n");
    return 0;     
}


/*
assignment

cmd line args
i/p
wwwbbbcde
o/p
w3b3cde


*/