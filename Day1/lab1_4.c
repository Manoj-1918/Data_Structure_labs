#include<stdio.h>
void primeCheck(int n);


int main(){
    int num;
    printf(" Enter the number ");
    scanf("%d",&num);
    primeCheck(num);
    return 0;
}


void primeCheck(int n){
    int count=0;
    if(n<=0)
    printf("only natural numbers are consider for prime numbers");
    else if(n==1){
        printf("1 is neither prime nor composite");
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
            count++;
            break;
            }
        }
    }
    if(count>0)
    printf("the number %d is not a prime number ",n);
    else
    printf("the number %d is a prime number",n);
}