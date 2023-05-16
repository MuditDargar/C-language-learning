#include <stdio.h>
#include<math.h>
int main()
{
    int a = 4;
    int b = 34;
    // operands is integer and float
    // operators is +,_,*,%,/ ..
    // % is not applicable in float
    // operations applicable in the right hand side
    // ex
    int z = a * b;
    //   b*a= z // not valid
    
    printf("the value of z is %d\n", z);
    printf("the value of  a+b is %d\n", a + b);
    printf("the value of  a-b is %d\n", a - b);
    printf("the value of  a*b is %d\n", a * b);
    printf("the value of  a/b is %d\n", a / b);


    // % give the remainder

    printf("the value of  a modulus b is %d\n", a % b);

    // no operator is assumed to be present
  //  printf("the value of 4*5 is %d\n",(4)(5)); --> wrong ,will not give 20
    printf("the value of 4*5 is %d\n",(4)*(5));

// power operator 
printf("the value of 4 cube is %f",pow(4,3)); // this is valid
// printf("the value of 4 cube is %d",4^3); // this is not valid

    return 0;
}