/* Capture Employee 10 records in the structure and s it in a file
01 10001 Bhima 10001.5 M 99999 Kar
02 10002 bhima2 10003. M 93833 Kar

*/

	

#include <stdio.h>

#define MAX_EMPLOYEES 10

// Define a structure to represent an employee
typedef struct Employee
{
    int id;
    char name[50];
    float salary;
    char gender;
    int department_id;
    char department[50];
} Employee;

int main()
{
    
    Employee employees[MAX_EMPLOYEES] = {
        {10001, "Bhima", 10001.5, 'M', 99999, "Kar"},
        {10002, "bhima2", 10003.0, 'M', 93833, "Kar"},
        
    };

    
    FILE *file = fopen("employees.txt", "w");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

   
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        fprintf(file, "%02d %d %s %.2f %c %d %s\n",
                i + 1,
                employees[i].id,
                employees[i].name,
                employees[i].salary,
                employees[i].gender,
                employees[i].department_id,
                employees[i].department);
    }

   
    fclose(file);

    printf("Employee records saved to employees.txt.\n");

    return 0;
}

