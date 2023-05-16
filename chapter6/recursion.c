#include<stdio.h>
// Recursion mean function ke ander wahi same function
int factorial(int x){
    if(x==1 || x==0){ 
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    int a ;
    scanf("%d",&a);
    printf("the value of factorial is %d is %d ",a,factorial(a));
    return 0;
}