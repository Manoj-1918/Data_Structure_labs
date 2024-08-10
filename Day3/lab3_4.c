#include<stdio.h>
int nonZeroelement(int m,int n,int arr[m][n]){
    int count = 0;
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0)
            count++;
        }
    }
    return count;

}
int main(){
    int m,n;
    printf("enter the dimension of matrix\n");
    scanf("%d%d",&m,&n);
    int sparse_Matrix[m][n];
    printf("enter the element of sparse matrix");
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&sparse_Matrix[i][j]);
        }
        printf("\n");
    }
   
    int size=0;

        for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(sparse_Matrix[i][j]!=0)
            size++;
        }
    }

    printf("we are here\n");
    int rowSp[size+1][3];
    rowSp[0][0]=m;
    rowSp[0][1]=n;
    rowSp[0][2]=size;

    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(sparse_Matrix[i][j]!=0){
                rowSp[k+1][0]=i;
                rowSp[k+1][1]=j;
                rowSp[k+1][2]=sparse_Matrix[i][j];
                k++;
            }

        }
    }

    // printing values
    printf("rows\tcolumn\tvalues\n");
    
    for(int i=0;i<size+1;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",rowSp[i][j]);
    }
    printf("\n");
    }

    return 0;
}