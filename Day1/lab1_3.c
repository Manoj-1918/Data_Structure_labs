#include<stdio.h>

int SumOfDigits(int n){
    if(n=0)
    return 0;
    else
    return ((n%10)+ SumOfDigits(n/10));

}
int main(){
    int a;
    int sum=0;

    printf("enter the positive numbers : ");
    scanf("%d",&a);
    sum=SumOfDigits(a);
    printf(" the sum of each digit in the number is : %d",sum);

    return 0;
}


// int SumOfDigits(int n){
//     int digit=0,sum=0;
//     while(n!=0){
//         digit=n%10;
//         sum=sum+digit; 
//         n=n/10;   
//     }
//     printf("sending the result");
//      return sum;
// }

