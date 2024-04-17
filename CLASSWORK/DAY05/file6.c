#include <stdio.h>

int main()
{
    int tab=2, it;
    int prod=0;

    it = 1;
beg:
    if(it >10)
        goto end;
    prod = tab * it;
    printf("\n%d x %d = %d",tab,it,prod);
    it++;
    goto beg;
end:
    printf("\n\n");
    return 0;
}