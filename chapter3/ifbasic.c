#include<stdio.h>
int main(){
    int age ;
    int vip =1 ;
    printf("enter the age\n");
    scanf("%d",&age);
    if(age<18){
        printf("awed driving wale\n");
    }
    else if(age>=18 && age<60 || vip==1 ){
        printf("you can drive the vehicle\n");
    }
    else{
        printf("buddapaa\n");
    }

    if(age==18 || age == 60){
        printf("border par hai\n");
    }
    return 0;
}