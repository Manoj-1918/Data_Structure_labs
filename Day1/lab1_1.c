#include<stdio.h>
void Compare(int i, int j);
void Refcompare(int*a, int *b);
int main(){
    int a,b;

    printf("enter the two numbers to compare");
    scanf("%d%d",&a,&b);
    Compare(a,b); // call by value;
    
    Refcompare(&a,&b);// call by reference
    return 0;

}
void Compare(int i, int j){
    if(i==j)
    printf("the numbers are equal");
    else if(i>j)
    printf("%d  is greater than %d\n",i,j);
    else
    printf("%d is smaller than %d\n",i,j);
}
void Refcompare(int *a, int *b){
    if(*a==*b)
    printf("the numbers are equal");
    else if(*a>*b)
    printf("%d  is greater than %d\n",*a,*b);
    else
    printf("%d is smaller than %d\n",*a,*b);
}