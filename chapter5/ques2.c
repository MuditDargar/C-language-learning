#include<stdio.h>
int ferh(int celcius){
    float ferh= (celcius)*9/5 + 32 ;
    printf("the value in ferhanite is %f\n",ferh);
}
int main(){
       ferh(34);
       ferh(5);
    return 0;
}