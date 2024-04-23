/*
demo on strings
*/
#include <stdio.h>

int main()
{
    char Name[] = "bhima shankar";
    char Name1[20];
    int i;
    for(i=0;i<20;i++)
        printf("\nName[%d] = %c its Ascii Value=%d",i,Name[i],Name[i]);

    printf("\n%s",Name);
    // Name1[0] = 'b';
    scanf("%[^\n]s",Name1);
    // fgets(Name1,20,stdin);
    printf("\n");
    puts(Name1);
    printf("\n\n");
    return 0;
}