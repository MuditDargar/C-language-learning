#include<stdio.h>
int main(){
    int skip=5;
    int i=0 ;
    while(i<10){
        i++;
        if(i!=skip){
              printf("%d\n",i);
        continue;
        }
        else{
       
         printf(":-))\n");
        }
      
    }
    return 0;
}