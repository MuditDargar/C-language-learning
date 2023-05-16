#include<stdio.h>
int average(int a, int b , int c){
    float avg = (a+b+c)/3;
    printf("the average of three number is %f\n",avg);
}
int main(){
        average(23,43,32);
        average(20,30,50);
    return 0;
}