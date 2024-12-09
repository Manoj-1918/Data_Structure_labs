#include<stdio.h>
int main(){
    int arr[]={2,1,4,6,3,7,9,0,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=11;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            printf("the element is found at %d",i+1);
            break;
        }
    }
    if(i==n)
    printf("the element is not found");

    return 0;



}