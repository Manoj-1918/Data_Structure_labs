#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));

    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
           scanf("%d",&arr[i]);
    }
    //sorting array element by linear search

    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    // printing the values
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

}