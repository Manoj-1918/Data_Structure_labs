#include<stdio.h>
int main(){
    int arr[]={2,4,6,8,10,12,13,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=n-1;
    int x=1,mid;
    do{
        mid=(left+right)/2;
        if(arr[mid]>x)
        right=mid-1;
        else if(arr[mid]<x)
        left=mid+1;    
        } while(x!=arr[mid] && left<=right);

        if (x==arr[mid])
        printf("found at %d",mid+1);
        else
        printf("not found");
        return 0;
}