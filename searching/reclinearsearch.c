#include<stdio.h>

int linesearch(int arr[],int i, int length,int x){
    if(i>length)     return -1;
    if(arr[i]==x)    return i;
    return linesearch(arr,i+1,length,x);
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