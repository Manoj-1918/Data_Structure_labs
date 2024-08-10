#include<stdio.h>
int main(){
    int n=0,new_element=0,temp=0;
    printf("Enter the size of array  ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the values of array in sorted order increasing oreder");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value to insert: ");
    scanf("%d",&new_element);
    for(int i=0;i<=n;i++){
        if(new_element <=arr[i]){
        temp=arr[i];
        arr[i]=new_element;
        new_element=temp;
        }
    }
    printf("\n");
    //printing the values
    for(int i=0;i<=n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}