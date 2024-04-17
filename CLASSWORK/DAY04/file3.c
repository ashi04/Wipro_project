/*
demo on equality, relational and logical operators

logical op: && => and operation : combine 2 or more realtiion exps 
            || => or operation : combine 2 or more
            ! => not operation

            (rel exp1) && (rel exp2)
            (a > b) && (a > c) => a is big amoung the three values
    1 0 0
    0 1 0
    0 0 0
    1 1 1

            (rel exp1) || (rel exp2)
            (a > b) || (a > c) => a is big 
    1 0 1
    0 1 1
    0 0 0
    1 1 1
            
*/

#include <stdio.h>

int main()
{
    int val1=20, val2=20;
    int res=(val1==10);

    printf("\nResult of Equality operator=%d",(10.25==(10.5-0.25)));
    printf("\nResult of Equality operator=%d",res);
    printf("\nResult of less than operator=%d",(val1<val2));
    printf("\nResult of lessthan or equalto operator=%d",(val1<=val2));
    printf("\nResult of greaterthan or equalto operator=%d",(val1>=val2));
    
    /*
    logical operations
    */
   printf("\nlogical and (&&) operation = %d",(100>20)&&((101<30)&&(val1==val2)));


    printf("\n\n");
    return 0;
}