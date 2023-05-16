#include<stdio.h>
int main(){
    // this is the if and else if ladder
    int num ;
    printf("enter your number \n");
    scanf("%d",&num);

    if (num ==1 ){
        printf("number is 1\n");
    }
    else if(num ==2){
        printf("number is 2\n");
    }
    else if(num ==3){
        printf("number is 3\n");
    }
else{
    printf("it is not 1,2 and 3");
}
    return 0;
}
// operator precidence
// priority         operators
//   1st                !
//   2nd               *,/,%
//   3rd               +,-
//   4th              <>,<=,>=
//   5th                ==,!=
//   6th                 &&
//   7th                 ||
//   8th                  =