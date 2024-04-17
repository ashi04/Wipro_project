/* 
Document sec
Desc: program to demo c program
     void func1() : display output

Author: BT
DOC/DOM: 12-04-2024
Version: 0.3v
         1.0v => stable version (base version)
         1.1v
         2.0 => stable version
*/

//Link sec
#include <stdio.h>
#define PI 3.142

//global dec sec
int sub(int, int);
int addition(int, int);

int z=10;



int main()
{
    /*dec part */
    int retValue = 20;
    char ch = 'a';
    char str1[20]="2002";
    

    printf("\n%d = %c\n", str1[0],str1[0]);
    printf("\n%d = %c\n", str1[1],str1[1]);
    printf("\n%d = %c\n", str1[2],str1[2]);
    printf("\n%d = %c\n", str1[3],str1[3]);
    printf("\n%d = %c\n", str1[4],str1[4]);
    printf("\n%d = %c\n", (ch+retValue),(ch+retValue));

    /*execution part*/
    printf("hello World");
    retValue = addition(100,20);
    printf("\nAddition=%d",retValue);
    retValue = sub(10,20);
    printf("\nSub = %d",retValue);

    return 0;
}

int sub(int x,int y)
{
    return ((x-y)+z);
}

int addition(int a, int b){
    return (a+b)+z;

}