#include<stdio.h>
int greatestCommonDivisior(int n,int m){
    int r;
    if(n==0)
    return m;
    else if(m==0)
    return n;
    else
    r=n%m;
    n=m;
    m=r;
    return greatestCommonDivisior(n,m);

}


int main(){
    int num1,num2,result;
    printf("Enter the two number whose GCD has to be found\n");
    scanf("%d%d",&num1,&num2);
    result=greatestCommonDivisior(num1,num2);
    printf("The GCD of numbers %d and %d is : %d",num1,num2,result);

    
    return 0;

}