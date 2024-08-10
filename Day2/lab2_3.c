#include<stdio.h>

int fibonacci(int n){
if(n==1 || n==2)
return 1;
else
return (fibonacci(n-1)+fibonacci(n-2));
}

int main(){
    int n;
    printf("Enter no of item of fibonaci series to be printed");
    scanf("%d",&n);
    if(n<=0) printf("not valid input");
    else{
        for(int i=1;i<=n;i++){
            printf("%d\t",fibonacci(i));
            
        }
    }
    return 0;
}

