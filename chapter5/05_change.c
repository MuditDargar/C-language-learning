#include<stdio.h>
void change(int b){
    b= 77 ;
}
int main(){
 int b= 344 ;
 printf("the value of b before change is %d\n",b);
 change(b);
 printf("the value of b after changing is %d\n",b);
    return 0;
}