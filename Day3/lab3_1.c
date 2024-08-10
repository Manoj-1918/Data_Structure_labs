#include<stdio.h>

// writng the code for sorted format of array!!
int* insert(int*nums,int pos,int n,int element){
    for(int i=n;i>=pos;i--){
        *(nums+i)=*(nums+i-1);
    }
    *(nums+pos-1)=element;
    return (nums);
}//working good..

void transverse(int*nums,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",*(nums+i));
    }
}

int search(int*nums,int n, int element){
    int point=-1;
    for(int i=0;i<n;i++){
        if(*(nums+i)==element)
        point = i;
    }
    return point+1;
}

int* delete(int*nums,int pos,int n){
    
    for(int i=pos-1;i<n;i++){
        *(nums+i)=*(nums+i+1);
    }

    return nums;
}


int main(){
     int n;
    int option;
    int *r;
    printf("enter the size of array \t");
    scanf("%d",&n);
     int arr[n+1];

   

    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int position;
    
    printf("\n\n Select Operation On Array\n\n");
    printf("1.Insert element\n2.Delete element\n3.Linear Search\n4.Traverse\n5.Exit\n");
    scanf("%d",&option);

    switch (option){
        case 1:
        {
        int pos=0,value=0;
        printf("Enter the position where you want to insert and then element value");
        scanf("%d%d",&pos,&value);
             if (pos>n+1 || pos<1)
        printf("This position is out of range.");
            else{
        r=insert(arr,pos,n,value);
        // printing array
            for(int i=0;i<=n;i++){
            printf("%d\t",*(r+i));
                 }
                }
                break;
        
        }
        case 2:
        {
        int pos=0;
        printf("Enter the position where you want to delete element\t");
        scanf("%d",&pos);
             if (pos>n+1 || pos<1)
        printf("This position is out of range.");
            else{
        r=delete(arr,pos,n);
        // printing array
            for(int i=0;i<n-1;i++){
            printf("%d\t",*(r+i));
                 }
                }
                break;
        
        }
        case 3:
        {
        int value,Position;
        printf("Enter the element value that you want to search");
        scanf("%d",&value);

        Position=search(arr,n,value);
        printf("valure retured");
        if(Position==-1)
        printf("Element not found\n");
        else
        printf("Element found at Position\t:\t%d",Position);

        break;
        }
        case 4:
        {
            transverse(arr,n);
            

        }
        case 5:
        {
            printf("ending the operation...");
            break;
        }
        // default:{
        // printf(" Entered option is invalid");
        // break;
        // }



    }
    return 0;
}