/*
demo on structures

*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int empid;
    char empName[20];
    char empG;
    int empPhno;
    float empSal;
};

typedef struct Employee EMP;

void display(EMP);
void getDetails(EMP*);

int main()
{
    //dec variables
    EMP e1,e2;
    /*
    printf("\nBase Address of e1 = %u",&e1);
    printf("\nBase Address of e2 = %u",&e2);
    printf("\nSizeof EMP = %d",sizeof(e1));
    */
   //pass by ref
    getDetails(&e1);
    getDetails(&e2);
    //pass by value
    display(e1);
    
    display(e2);

    printf("\n\n");
    return 0;

}


void display(EMP emp)
{
    printf("\nID: %d",emp.empid);
    printf("\nGender: %c",emp.empG);
    printf("\nPhno: %d",emp.empPhno);
    printf("\nSalary: %f",emp.empSal);
    printf("\nName: %s",emp.empName);
    
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
