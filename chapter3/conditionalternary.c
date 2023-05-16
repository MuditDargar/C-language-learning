// syntax of ternary operators
// condition ? expression-if-true : expression if false
// ? and : --> is teranry operators
#include<stdio.h>
int main(){
    int a;
    printf("enter the number \n ");
    scanf("%d", &a);
 // one liner if and else statement
    (a<5)? printf("the number is less than 5"):printf("the number is greather than or equal to 5");
    return 0;
}