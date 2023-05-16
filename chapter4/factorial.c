
// using while loop
// #include<stdio.h>
// int main(){
//     int n ;
//     int fact =1 ;
//     scanf("%d",&n);
//     int i =1 ;
//     while( i<=n){
//         fact=fact*i ;
//         i++ ;
//     }
//     printf("the factorail of %d is %d",n ,fact);
//     return 0;
// }

// using do while loop
// #include<stdio.h>
// int main(){
//     int n ;
//     int fact= 1 ,i =1 ;
//     scanf("%d",&n);
//     do{
//         fact=fact*i ;
//         i++;

//     }while(i<=n);
//     printf("the factorial of %d is %d",n,fact);
//     return 0;
// }

//using for loop
#include<stdio.h>
int main(){
    int n,fact=1 ,i=1 ;
    scanf("%d",&n);

    for(i=1 ;i<=n ;i++){
        fact=fact*i;
    }
 printf("the factorial of %d is %d",n,fact);
    return 0;
}