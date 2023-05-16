#include<stdio.h>
int main(){
    // do while execute at least once time 
    // do while loop  execute once time then check the condition
    // while loop first check the condition then execute  
    int a ;
    scanf("%d",&a);
    do{
    printf("the value of a is %d\n",a);
    a++ ;
    }while(a<10);
    return 0;
}