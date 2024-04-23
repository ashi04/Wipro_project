/* Core Application Framework

Develop the initial framework for the application that handles command-line
input and output.

Implement the main loop that will invoke the correct file handling based on
user input or file type */

#include <stdio.h>
#include <string.h>


void handleFileAction(char* fileType);
void handleOtherAction(char* action);

int main()
{
    char userInput[50];
    printf("Welcome to the application!\n");

    while (1)     
    {
        printf("\nEnter your command or action: ");
        fgets(userInput, sizeof(userInput), stdin);
        userInput[strcspn(userInput, "\n")] = '\0'; 

        if (strcmp(userInput, "exit") == 0) 
        {
            printf("Exiting the application. Goodbye!\n");
            break;
        } 
        else if (strcmp(userInput, "file") == 0)
        {
            char fileType[20];
            printf("Enter the file type or action: ");
            fgets(fileType, sizeof(fileType), stdin);
            fileType[strcspn(fileType, "\n")] = '\0'; 
            handleFileAction(fileType);
        } 
        else 
        {
            handleOtherAction(userInput);
        }
    }

    return 0;
}