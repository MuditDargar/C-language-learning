#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum =0 ;
    for(int i=1 ;i<=n ;i++){
        sum= sum+i ;
    }
    printf("the sum of %d natural no is %d",n,sum);
    return 0;
}