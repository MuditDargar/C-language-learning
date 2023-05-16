#include <stdio.h>

int area(int side)
{
    int area = side * side;
    printf("the area of square is %d\n", area);
}
int main()
{
    int a;
    scanf("%d", &a);
    area(a);
    return 0;
}