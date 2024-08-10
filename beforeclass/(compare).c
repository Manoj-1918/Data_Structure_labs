#include<stdio.h>
int Smallest(int *arr,int n);
int Greatest(int *arr, int n);
int main(){
    int n;
    printf("enter the number of element to store in array:  ");
    scanf("%d",&n);
    int arr[n],smallest,greatest;

    for(int i=0;i<n;i++){
        printf("enter the element");
        scanf("%d",&arr[i]);
        printf("\n");

    }
    smallest=Smallest(arr,n);
    greatest=Greatest(arr,n);
    printf("The smallest number in the arry is : %d\n",smallest);
    printf("The greatest number in the arry is : %d\n",greatest);
    return 0;

}
int Smallest(int* arr,int n){
    int result;
    result=*arr;
    for(int i=0;i<n;i++){
        if(*arr<result)
        result=*arr;
        arr++;
    }
    return result;
}
int Greatest(int* arr,int n){
    int result;
    result=*arr;
    for(int i=0;i<n;i++){
        if(*arr>result)
        result=*arr;
        arr++;
    }
    return result;
}