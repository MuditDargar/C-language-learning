#include<stdio.h>
int main(){
    int n ;
    int sum =0 ;

    scanf("%d",&n);
    for (int  i = 1; i <=10; i++)
    {
        sum=sum+n*i;
    }
    printf("the sum of table of a %d is %d",n,sum);
    return 0;
}