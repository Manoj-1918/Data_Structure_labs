#include<stdio.h>
int reverse(int num,int rev){
    if(num==0)
    return rev;
    else{
        rev=rev*10+num%10;
        return reverse(num/10,rev);
    }

    }
int palidrome(int num){
    if(num<0)   return 0;
    int reversed=reverse(num,0);
    if(reversed == num)
    return 1;
    return 0;
}

int main(){
    int num=0,result;
    printf("Enter the number to check for palidrome\t");
    scanf("%d",&num);
    result=palidrome(num);

    if(result)
    printf("\n\nEntered number is Palidrome number");
    else
    printf("\n\nEntered number is not a palidrome number");

}