/*

demo on increment and decrement operators

*/

#include <stdio.h>

int main()
{
    int x = 10;
    int y;
    y = --x;
    printf("\nx=%d y=%d\n",x,y);
    printf("\nx=%d y=%d\n",x++,--y);
    printf("\nx=%d y=%d\n",x,y);
    

    printf("\n\n");
    return 0;
}

/*

int x=101,y=20,z;

z=++x;   x=102,z=102,y=20
y=++z;   z=103, y=103
++y;     y=104
printf("\nx=%d y=%d z=%d",x++,++y,--z);
x=103,y=105,z=102
101 105 101
103 104 102
102 105 102

102 105 102


*/