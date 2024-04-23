// **SCAN AND PRINT THE EMPLOYEE DETAILS**//
  
    
#include <stdio.h>

#define max_employees 100 

struct Employee 
{
    int sl_no;
    int employee_id;
    char name[50];
    char gender;
    float salary;
    char phone[15];
    char address[100];
};

int main() 
{
    struct Employee employees[max_employees]; 
    int num_employees; 

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);



    

    printf("\nEnter employee details:\n");
    for (int i = 0; i < num_employees; i++) 
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("SL no: ");
        scanf("%d", &employees[i].sl_no);

        printf("ID: ");
        scanf("%d", &employees[i].employee_id);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Phone: ");
        scanf("%s", employees[i].phone);

        
        printf("Address: ");
        scanf("%s", employees[i].address);
    }

    
        printf("\nEmployee details:\n");
    for (int i = 0; i < num_employees; i++) 
    {  
        printf("\nEmployee %d:\n", i + 1);
        printf("SL no: %d\n", employees[i].sl_no);
        printf("ID: %d\n", employees[i].employee_id);
        printf("Name: %s\n", employees[i].name);
        printf("Gender: %c\n", employees[i].gender);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Phone: %s\n", employees[i].phone);
        printf("Address: %s\n", employees[i].address);
    }

    return 0;
}