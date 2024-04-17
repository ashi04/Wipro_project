/*
demo on i/o statements
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int num;

    /*
    printf("\n%010d\t%5.2f\n",5,201.5);
    printf("\n%c \t %s","A", "BHIMA");
    */
    printf("\nAddress of num = %u\n",&num);
    scanf("%2d",&num);
    printf("\nValue stored @ %u = %d",&num, num);

    printf("\n\n");
    

    return 0;
}

/*
1. Assignment
scan and print Employee details 

o/p
========================================
            Employee Details
========================================

SLNo    ID  Name    Gender    Sal Phno    Address
----    --- ------- ------    ---   ------  -------
1       101 Bhima   M         10000.5 99999 Kar



2. Print the table with user i/ps
o/p
Table: 2

2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20
*/