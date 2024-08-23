 #include<stdio.h>

int maximum(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    else{
    int max=maximum(arr,n-1);
        if(arr[n-1]>max){
        return arr[n-1];
        }
        else 
        return max;
    }
}
int minimum(int arr[],int n){
    if(n==1)
    return arr[0];
    else{
    int min=minimum(arr,n-1);
        if(arr[n-1]<min){
        return arr[n-1];
        }
        else
        return min;
    }
}

int main(){
    int n,max1,min1;
    printf("enter the size of array\t");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of array i.e %d",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max1=maximum(arr,n);
    min1=minimum(arr,n);

    printf("\nMaximum value = \t%d",max1);
    printf("\nMinimum value = \t%d",min1);

    return 0;
}
//defining the functions..
