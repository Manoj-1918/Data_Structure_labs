#include<stdio.h>
int reverse(int num,int rev){
    if(num==0)
    return rev;
    else{
        rev=rev*10+num%10;
        return reverse(num/10,rev);
    }
}

int main(){
    int num=0,result;
    printf("Enter the number \t");
    scanf("%d",&num);
    result=reverse(num,0);
    if(result>=0)
    printf("\n Original number :  %d\n Reverse number :  %d ",num,result);
    else
    {
        result=result*(-1);
        printf("\n Original number :  %d\n Reverse number :  %d- ",num,result);

    }
}
