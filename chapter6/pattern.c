#include <stdio.h>
void printpattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
         return ;
    }
    // for n= 3
    //*
    //***
    //*****
    // 1-1
    // 2-3
    // 3-5
    // (2n-1)
    printpattern(n - 1);
    for (int i = 0; i <  ( 2*n -1 ) ; i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    printpattern(n);
    return 0;
}