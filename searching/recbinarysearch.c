#include<stdio.h>
int search(int arr[],int l, int r, int x){
    if(r>=l){
        int mid=(l+r)/2;
        if(arr[mid]==x)     return mid;
        if(arr[mid]>x)      return search(arr,l,mid-1,x);
        return search(arr,mid+1,r,x);
    }
}

int main(){
    int arr[]={1,4,2,6,3,54,88,11};
    int length=sizeof(arr)/sizeof(arr[0]);
    int index=linesearch(arr,0,length,3);
    if(index==-1){
        printf("not found");
    }
    else{
        printf("found at %d",index+1);
    }
    return 0;
}