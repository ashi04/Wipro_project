/*
demo on functions
*/

#include <stdio.h>

//declare/prototyping a function
void display(char *);

int main()
{
    char wcStr[] = "\nWelcome to C Programming class\n";
    char endStr[] = "\nEnd of Program\n";
    //call of function
    display(wcStr);
    printf("\nThis is Main Function\n");
    display(endStr);
    printf("\n\n");
    return 0;
}

//defining a function
void display(char *str1)
{
    int i;
    putchar('\n');
    for(i=0;i<30;i++)
        putchar('=');
    printf("%s",str1);
    
    for(i=0;i<30;i++)
        putchar('=');
    printf("\n\n");   
}