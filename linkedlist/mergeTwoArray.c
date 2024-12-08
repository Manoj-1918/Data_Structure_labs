 #include <stdio.h>


void merge(int* num1, int num1Size, int m, int* num2, int numsSize, int n){
    int i=0,j=0,k=0;
    int arr[num1Size];

        while(i<m && j<n){
            if(num1[i]<=num2[j]){
                arr[k]=num1[i];
                i++;
            }
            else{
                arr[k]=num2[j];
                j++;
            }
            k++;
            }
        while(i<m){
            arr[k]=num1[i];
            i++;
            k++;
        }
        while(j<n){
            arr[k]=num2[j];
            j++;
            k++;
        }
    for(i=0;i<num1Size;i++){
        num1[i]=arr[i];
    }     
}

//ADD MAIN FUNCTION YOURSELF...