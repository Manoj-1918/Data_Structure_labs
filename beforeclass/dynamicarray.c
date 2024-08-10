// creating array dynamically

#include<stdio.h>
#include<stdlib.h>

struct arrclass{
    int totalSize;
    int usedSize;
    int *ptr;
};
void allocateMemory(int size,int*ptr){
    ptr=(int*)malloc(size*sizeof(int));

}
void setarray(int* ptr,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter the element %d  :",i+1);
        scanf("%d",(ptr+i));
    }
    printf("array filled successfully ");
}
void showArray(int* ptr,int size){
       for(int i=0;i<size;i++){
        printf("\n%d \t",*(ptr+i));
    }

}

int main(){
    struct arrclass array; 
    printf("Enter the max size of array that can be used and current use size ");
    scanf("%d%d",&array.totalSize,&array.usedSize);
    allocateMemory(array.totalSize,array.ptr);
    setarray(array.ptr,array.usedSize);
    showArray(array.ptr,array.usedSize);
    return 0;

}