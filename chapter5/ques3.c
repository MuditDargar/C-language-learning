#include<stdio.h>
int weight(int mass){
    float weight=mass *9.8 ;
    printf("the weight exerted by the earth is %f\n",weight);

}
int main(){
          weight(20);
          weight(10);
    return 0;
}