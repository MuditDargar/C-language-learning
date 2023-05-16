#include<stdio.h>
int main(){
    int n ;
scanf("%d",&n);
for(int i=2 ;i<=n-1;i++){
    if(n%i !=0){
        printf("the number is prime");
        break;
    }
    else{
    printf("number is not prime");
    break;
    }
}
if(n==1 || n== 2){
    printf("number is prime ");
}
    return 0;
}