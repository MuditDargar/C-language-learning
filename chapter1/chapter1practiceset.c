#include<stdio.h>
int main(){
    int l,b;
   scanf("%d",&l) ;
   scanf("%d",&b) ;
   printf("the area of rectangle is %d",l*b);


int radius;

scanf("%d",&radius);
printf("write the value of radius %d",radius);
printf("the area of circle is %f",3.14*radius*radius);
int height ;
scanf("%d",&height);
printf("the area of cylindir is %f ",3.14*radius*radius*height);

int celcius;
float far ;
printf("enter the value in celcius is");
scanf("%d",&celcius);
far=(celcius*9/5)+32 ;
printf("%f",far);

int p,r,t;
scanf(" %d %d %d", &p , &r , &t);
printf("%d", (p*r*t)/100);
}