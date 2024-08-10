#include<stdio.h>
int checkMultiply(int c1,int r2){
    if(c1==r2)
    return 1;
    return 0;
}


int main(){
    int r1,c1,r2,c2;
    printf("enter the dimension of first martix and then second matrix");
    scanf("\t%d%d",&r1,&c1);
    scanf("\t%d%d",&r2,&c2);
    int arr1[r1][c1],arr2[r2][c2];
    int result[r1][c2];

   // getMatrix(arr1[][],r1,c1);
        printf("Enter the elements of the array\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    //getMatrix(arr2[][],r2,c2);
        printf("Enter the elements of the array\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }


    if(!checkMultiply(c1,r2)){
        printf("these two matrices can't be multiplied.");

    }
    else{
        printf("working on it\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                result[i][j]=0;
                for(int k=0;k<c1;k++){
                    result[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }

        }
    }

    //traversal(result,c1,r2);

    for(int i=0;i<r1;i++){

        for(int j=0;j<c2;j++){
            printf("%d\t",result[i][j]);

        }
        printf("\n");
    }
    return 0;
}






// void traversal(int arr[][],int n,int m){
//     for(int i=0;i<n;i++){

//         for(int j=0;j<m;j++){
//             printf("%d\t",result[i][j]);

//         }
//         printf("\n");
//     }
// }
// void getMatrix(int arr[][],int r,int c){
//     printf("Enter the elements of the array\n");
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             scanf("%d",&arr1[i][j]);
//         }
//         printf("\n");
//     }
// }