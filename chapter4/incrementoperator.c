#include<stdio.h>
int main(){
    int a= 4;
    // post increment
    // a++ -> pehle print  then fir increment 
    // a-- -> pehle print then fir decrement
    printf("the value after a++ is %d\n",a++);
    printf("the value after a is %d",a);
printf("\n\n\n\n");
// pre increment
// ++a ->pehle increment then fir print
// --a ->pehle decrement then fir print
  printf("the value after ++a is %d\n",++a);
    printf("the value after a is %d\n",a);
    
    // increment with assign operator
    int b= 9 ;
    b+=10 ;
    printf("the value of b is %d",b);
    return 0;
}