#include <stdio.h>
int main()
{
    int sum_of_even = 0;
    int sum_of_odd=0;
    int i;
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            sum_of_even= sum_of_even+i;
        }
        else
        {
            sum_of_odd = sum_of_odd +i;
        }
    }
    printf(" sum of even no:  %d ",sum_of_even);

    printf(" sum of odd no:  %d ",sum_of_odd);

    return 0;
}