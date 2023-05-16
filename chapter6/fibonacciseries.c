#include<stdio.h>
int fibonacci(int number){
   if(fibonacci(1)) {
    return 0;
   }
    if(fibonacci(2)) {
    return 1;
   }
else{
   return fibonacci(number -1)+fibonacci(number-2);
}


}
int main(){
     int a;
     scanf("%d",&a);
     printf("the value of  %d fibonacci series is %d ",a,fibonacci(a));
    return 0;
}