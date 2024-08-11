#include<stdio.h>
int main(){
    int arr[10]={0,2,5,4,7,6,-1,4,9,5};
    int smallest=arr[0];
    int smaller=arr[1];

            for(int j=1;j<10;j++){
            if(arr[j]<smallest)
            smallest=arr[j];
            }
            for(int i=0;i<10;i++){

            if(arr[i]<smaller && arr[i]>smallest )
            smaller=arr[i];
        }
    

    printf("1st smallest: %d \n %d",smallest,smaller);
    return 0;
}