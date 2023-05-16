#include<stdio.h>
int main(){
    int n;
    printf("enter the value of the number is ");
    scanf("%d",&n);
    printf("the %d natural no. print in reverse order \n",n);
    for (int i = n; i>=1 ; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}