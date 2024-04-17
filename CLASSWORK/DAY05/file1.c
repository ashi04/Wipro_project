/*
demo on i/o sts
*/
#include <stdio.h>
/*
int main()
{
    int a,b;
    char ch='1';
    char Name[20];
    while(ch){
        printf("\n%c=%d\n",ch,ch);
        printf("\nDo you want to continue (1/0): ");
        getchar();
        scanf("%c",&ch);
    }
    scanf("%d%d%s",&a,&b,&Name[0]);
    printf("\nch : %d=%c",ch,ch);
    // getchar();
    
    printf("\nValues scanned\n");
    printf("\n%d\t%d\t%s\t%c",a,b,Name,ch);
    printf("\nch : %d=%c",ch,ch);
    printf("\n\n");
    return 0;
}
*/

int main()
{
    int a,b,c;
    int ret=0;
    printf("\nEnter the value os a,b,c: ");
    ret = scanf("%d%d%d",&a,&b,&c);
    printf("\nRet Vlaues from scanf=%d\n",ret);
    if (ret ==3)
        printf("\nValues\n%d\t%d\t%d\n\n",a,b,c);
    
    return 0;
}