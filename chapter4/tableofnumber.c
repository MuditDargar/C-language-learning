#include <stdio.h>
// table of any number is....
int main()
{
    int n;
    printf("enter the vlue of the n ->\n");
    scanf("%d", &n);
    printf("the %d table  is \n ", n);
    for (int i = 1; i <= 10; i++)
    {

        printf("%d\n", n * i);
    }

    return 0;
}