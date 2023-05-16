#include<stdio.h>
int main(){
    int a =10 ;
// start from right to left in this case (for gcc)
// but this depend upon the compiler behaviour
    printf("%d %d %d\n",a,++a,a++);
    return 0;
}