/*
star pattern
*/
#include <stdio.h>
/*
int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    i = 1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n\n");
    return 0;
}
*/

/*
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    i=1;
    while(i<=(n*n))
    {
        if(i%n == 0)
            printf("*\n");
        else
            printf("*");
        i++;
    }

    printf("\n\n");
    return 0;
}
*/
int main()
{
    int n;
    int i,num;
    int ret=0, sum=0;
    scanf("%d",&num);
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        
        ret = (ret*10)+num;
        sum = sum+ret;
        printf("%d ",ret);
        i++;
    }
    printf("\nSum = %d",sum);
    printf("\n\n");
    return 0;
}