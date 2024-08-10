// simple structure of fuction..
#include<stdio.h>
int Sum(int a, int b, int c);
int main(){
    int a,b,c, sum;
    printf("enter the three numbers to add\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=Sum(a,b,c);
    printf("\n the sum of the numberes is : %d ",sum);
}

// defining the function
int Sum(int a, int b , int c){
    int result = a+b+c;
    return result;
}