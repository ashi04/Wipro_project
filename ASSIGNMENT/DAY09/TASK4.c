#include <stdio.h>

#define MAX_EMPLOYEES 10

// Define a structure to represent an employee
typedef struct Employee {
    int id;
    char name[50];
    float salary;
    char gender;
    int department_id;
    char department[50];
} Employee;

// Function to read employee records from a file and store them in an array of Employee structures
int read_employee_records(Employee employees[]) {
    FILE *file = fopen("employees.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 0; // Return 0 to indicate failure
    }

    int count = 0; // Variable to count the number of records read
    while (count < MAX_EMPLOYEES &&
           fscanf(file, "%d %s %f %c %d %s",
                  &employees[count].id,
                  employees[count].name,
                  &employees[count].salary,
                  &employees[count].gender,
                  &employees[count].department_id,
                  employees[count].department) == 6) {
        count++;
    }

    fclose(file);

    return count; // Return the number of records read
}

int main() {
    // Create an array to hold employee records
    Employee employees[MAX_EMPLOYEES];

    // Read employee records from the file and store them in the array
    int num_records = read_employee_records(employees);
    if (num_records == 0) {
        printf("No records read.\n");
        return 1;
    }

    // Print the employee records read from the file
    printf("Employee records read from file:\n");
    for (int i = 0; i < num_records; i++) {
        printf("%d %s %.2f %c %d %s\n",
               employees[i].id,
               employees[i].name,
               employees[i].salary,
               employees[i].gender,
               employees[i].department_id,
               employees[i].department);
    }

    return 0;
}