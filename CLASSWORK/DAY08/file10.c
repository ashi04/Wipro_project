/*
demo on structures

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee
{
    int empid;
    char empName[20];
    char empG;
    int empPhno;
    float empSal;
};

typedef struct Employee EMP;

void display(EMP*);
void getDetails(EMP*);

int main()
{
    //dec variables
    int nemps;
    EMP *eptr = NULL, *temp=NULL;
    int i;
    /*
    printf("\nBase Address of e1 = %u",&e1);
    printf("\nBase Address of e2 = %u",&e2);
    printf("\nSizeof EMP = %d",sizeof(e1));
    */
   //pass by ref
   printf("\nEnter no emps: ");
   scanf("%d",&nemps);

    eptr = (EMP *)malloc(nemps*sizeof(EMP));
    temp = eptr;
    
    for(i=0;i<nemps;i++){
        getDetails(eptr);
        eptr++;
    }
    eptr = temp;

    //pass by value
    for(i=0;i<nemps;i++,eptr++)
        display(eptr);
    
    
    printf("\n\n");
    return 0;

}


void display(EMP *emp)
{
    printf("\nID: %d",emp->empid);
    printf("\nGender: %c",emp->empG);
    printf("\nPhno: %d",emp->empPhno);
    printf("\nSalary: %f",emp->empSal);
    printf("\nName: %s",emp->empName);
    
}

void getDetails(EMP *emp)
{
    printf("\nEnter the details of the Employee\n");
    scanf("%d",&emp->empid);
    getchar();
    scanf("%c",&emp->empG);
    scanf("%d",&emp->empPhno);
    scanf("%f",&emp->empSal);
    scanf("%s",emp->empName);
}
