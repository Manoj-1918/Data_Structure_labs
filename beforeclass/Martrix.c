#include<stdio.h>
#include<stdlib.h>
int** allocatememory(int n){
    int **arry=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++){
        arry[i]=(int *)malloc(n*sizeof(int));
    }
    return arry;
}

void freememory(int **arry,int n){
    for(int i=0;i<n;i++){
        free(arry[i]);
    }
    free(arry);
}


int nonZeroElement(int **arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr[i][j]!=0)
        count++;
        }
    }
    return count;
}

void upperTriangle(int**arr,int n){
    
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

void noDiagonal(int **arr,int n){
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
    int n,**p;

    printf(" Computing different operation on Square matrix \n");
    printf(" Enter the size of square matrix :\t");
    scanf("%d",&n);
    p=allocatememory(n);
    int option;

    //getting value from user
    printf("Enter the %d values for input data format should be according to size of aquare matrix:\n",n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                scanf("%d",&p[i][j]);
        }
        printf("\n");

    }
printf(" printing matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                printf("%d\t",p[i][j]);
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
        printf("\n No.of Non Zero element in matrix is :%d",nonZeroElement(p,n));
        break;

    }
    case 2:{
        upperTriangle(p,n);
        break;

    }
    case 3:{
        noDiagonal(p,n);
        break;


    }
    default:
        break;
    }


    freememory(p,n);
    return 0;
}