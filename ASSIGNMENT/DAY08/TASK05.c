/* alternativel merge two strings
i/p
Bhima
ABCDEOLM
o/p
BAhBiCmDaEOLM */

#include <stdio.h>
#include <string.h>

void mergeStrings(char *str1, char *str2, char *merged)
{
    int index = 0;
    int i = 0, j = 0;
    while (str1[i] != '\0' && str2[j] != '\0') 
    {
        merged[index++] = str1[i++];
        merged[index++] = str2[j++];
    }
    while (str1[i] != '\0')
    {
        merged[index++] = str1[i++];
    }
    while (str2[j] != '\0')
    {
        merged[index++] = str2[j++];
    }
    merged[index] = '\0';
}

int main()
{
    char str1[100], str2[100], merged[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

   printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    mergeStrings(str1, str2, merged);
    printf("Output: %s\n", merged);

    return 0;
}