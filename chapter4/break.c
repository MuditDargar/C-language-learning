#include<stdio.h>
int main(){
// break statement is for exit the loop ,if condition is true or false
int i =0 ;
do{
printf("the value of i is %d\n",i);
if(i==3){
    break;
}
i++ ;
}while(i<=10);
    return 0;
}