#include <stdio.h>
int main()
{
    // 3*x -8y is(3x)-(8y) or 3(x-8y) ?
    int x = 4;
    int y = 9;
    printf("the value of 3x-8y is %d\n", 3 * x - 8 * y);
    printf("the value of 8*y/3*x is %d", 8 * y / 3 * x);
    // 8*9/3*4 = 72/12 will give wrong answer
    // the solution is 8*9/3=24
    // 24
    // prority    order
    //   1st     *   /  %
    //   2nd       +  -
    //   3rd        =

    // Assosiativity rule
    // x*y/z --> (x*y)/z
    //x/y *z -->(x/y)*z
   //  */ follow left ot right assosiativity
    return 0;
}