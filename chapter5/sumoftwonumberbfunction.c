#include<stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output 

int sum(int a,int b ) // function prototype
//here  a and b is are the perameters
{
    int sum= a+b ;     // function definition
   printf("%d\n",sum);
}

int main(){
    sum(25,15);// function call
  // here 25 and 15 is the arguements
    sum(25,75);// function call
    // here 25 and 75 is the arguements
    return 0;
}