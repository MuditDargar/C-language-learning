// its lower case or not  program
#include<stdio.h>
int main(){
    char ch ;
    printf("enter the character ->");
    scanf("%c",&ch);
    // 97 -122 = a-z ascii value
    
    if(ch<=122 && ch>=97){
        printf("it is lowercase");
    }
    else{
        printf("it is not lowercase");
    }
    return 0;
}