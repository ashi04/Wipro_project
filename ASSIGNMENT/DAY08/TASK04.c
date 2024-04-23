/* C Program to Remove all Characters in Second String which are present in First String
i/p
Bhima shankar is a C programmeC
o/p
Bhima snkr is a C programme*/

#include <stdio.h>
#include <string.h>

void removeChars(char *str1, char *str2)
{
    int hash[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) 
    {
        hash[(int)str1[i]] = 1;
    }

    int resIndex = 0;
    for (int i = 0; str2[i] != '\0'; i++) 
    {
        if (hash[(int)str2[i]] == 0) 
        {
            str2[resIndex++] = str2[i];
        }
    }
    str2[resIndex] = '\0';
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: "); 
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    removeChars(str1, str2);
    printf("Output: %s\n", str2);

    return 0;
}


