#include<stdio.h>
int main(){
    int phy,che, maths;
    float total ;

    printf("enter the marks of phy");
    scanf("%d",&phy);

    printf("enter the marks of che");
    scanf("%d",&che);

    printf("enter the marks of Maths");
    scanf("%d",&maths);

total = (phy+che+maths)/3 ;
if(total <40 || phy <33 || che <33 || maths<33){
    printf("the total percentage is %f and you are fail\n",total);
}
else{
    printf("the total percentage is %f and you are pass\n",total);
}
    return 0;
}