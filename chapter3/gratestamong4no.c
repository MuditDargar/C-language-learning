#include <stdio.h>
int main()
{
    float a, b, c, d;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    if (a > b && a > c && a > d)
    {
        printf("the %f is the greatest no. among four", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("the  %f is the greatest no. among four", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("the %f is the greatest no. among four", c);
    }
    else
    {
        printf("the %f is greatesgt no.", d);
    }
    return 0;
}