#include<stdio.h>
int nonZeroElement(int n,int arr[][n]){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr[i][j]!=0)
        count++;
        }
    }
    return count;
}

void upperTriangle(int n,int arr[][n]){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && i<j)
            printf("%d\t",arr[i][j]);
            else
            printf(" \t");

        }
        printf("\n");
    }
}

void noDiagonal(int n,int arr[][n]){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j)
            printf("%d\t",arr[i][j]);
            else
            printf(" \t");

        }
        printf("\n");
    }

    
}

int main(){
    int n;

    printf(" Computing different operation on Square matrix \n");
    printf(" Enter the size of square matrix :\t");
    scanf("%d",&n);
    int arr[n][n];
    int option;

    //getting value from user
    printf("Enter the %d values for input data format should be according to size of aquare matrix:\n",n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
        }
        printf("\n");

    }
printf(" printing matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                printf("%d\t",arr[i][j]);
        }
        printf("\n");

    }

    printf("\n\n Operation to do :");
    printf("\n\n1.No.of Non zero element\n2.Upper Triangular matrix\n3.No Diagonal matrix");
    scanf("%d",&option);

    switch (option)
    {
    case 1:{
        printf("enter in switch");
        printf("\n No.of Non Zero element in matrix is :%d",nonZeroElement(n,arr));
        break;

    }
    case 2:{
        upperTriangle(n,arr);
        break;

    }
    case 3:{
        noDiagonal(n,arr);
        break;


    }
    default:
        break;
    }
    return 0;
}