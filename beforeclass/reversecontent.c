#include<stdio.h>
//void reverseArray(int *arr,int n);
int main(){
    int n;
    printf("enter the number of element to store in array:  ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter the element");
        scanf("%d",&arr[i]);
        printf("\n");

    }
    printf("the original Array!!\n");
      for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);

    }
   // reverseArray(arr,n);
int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }
printf("\n");

    printf("the Reverse Array!!\n");
      for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);

    }
    return 0;
}

// void reverseArray(int *arr, int n){

// }