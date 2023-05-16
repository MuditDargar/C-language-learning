#include<stdio.h>
int main(){
    // print first n natural number
    int a= 1;
    int n;
    scanf("%d",&n);
    do {
        printf("%d\n",a);
        a++ ;
    }while(a<=n);
    return 0;
}