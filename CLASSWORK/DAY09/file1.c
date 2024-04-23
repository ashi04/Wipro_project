#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display();

int add(int, int);
char *Name();

int main()
{
    void (*fptr)();
    char *empName = NULL;
    fptr = display;
    // display();
    (*fptr)();

    empName = Name();

    puts(empName);
    printf("\nAddition result: %d\n",add(43,23));

    (*fptr)();
    fptr = add;
    (*fptr)(101,31);
    printf("\n\n");
    return 0; 
}


void display()
{
    printf("\n======================");
    printf("\n      WelCome        \n");
    printf("\n======================");
}

int add(int x, int y)
{
    printf("\n(withon func) Addition result: %d\n",x+y);
    return (x+y);
}

char *Name()
{
    char *name = (char *)malloc(1000);
    printf("\nEnter the Name of the Person: ");
    scanf("%s",name);

    return name;
}

