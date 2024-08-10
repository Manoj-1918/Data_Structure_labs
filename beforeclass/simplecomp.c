#include<stdio.h>
//int Smallest(int arr[]);
//int Greatest(int arr[]);
int main(){
    int n;
    printf("enter the number of element to store in array:  ");
    scanf("%d",&n);
    int arr[n],smallest,greatest;
    // getting smallest value
    for(int i=0;i<n;i++){
        printf("enter the element"+(i+1));
        scanf("%d",&arr[i]);
        printf("\n");

    }

    smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest)
        smallest=arr[i];
    }
     greatest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>greatest)
        greatest=arr[i];
    }
    
    // printing values
      printf("The smallest number in the arry is : %d\n",smallest);
    printf("The greatest number in the arry is : %d\n",greatest);
    return 0;
}