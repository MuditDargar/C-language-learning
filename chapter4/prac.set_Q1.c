#include <stdio.h>
int main()
{

    printf("the 10s table in reverse order is\n");
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", 10 * i);
    }
    return 0;
}