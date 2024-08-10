#include<stdio.h>
int main(){
    int row,cols,values;
printf("enter the no of rows ,column and no. of non zero values\n");
scanf("%d%d%d",&row,&cols,&values);
int triplet[values+1][3];
triplet[0][0]=row;
triplet[0][1]=cols;
triplet[0][2]=values;
for(int i=1;i<values+1;i++){
    for(int j=0;j<3;j++){
    scanf("%d",&triplet[i][j]);
    }

}
    printf("rows\tcolumn\tvalues\n");
for(int i=0;i<values+1;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",triplet[i][j]);
    }
    printf("\n");
}
int transpose[values+1][3];
transpose[0][0]=cols;
transpose[0][1]=row;
transpose[0][2]=values;
int k=1;
for(int i=0;i<cols;i++){
    for(int j=1;j<values+1;j++){
        if(triplet[i][1]==i){
            transpose[k][0]=i;
            transpose[k][1]=triplet[j][1];
            transpose[k][2]=triplet[j][2];
            k++;
        }

    }
}
    printf("rows\tcolumn\tvalues\n");
for(int i=0;i<values+1;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",transpose[i][j]);
    }
    printf("\n");
}

    return 0;
}