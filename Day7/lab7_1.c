#include<stdio.h>
#define n 10
int front=-1;
int rear=-1;
int queue[n];

void insert(int data){
    if(rear==n-1){
        printf("overflow error ");
    }
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;

    }

}
void delete(){
    int item;
    if(rear==-1 && front==-1){
        printf("underflow condition");
    }
    else if(rear==front){
    item=queue[front];
    front=-1;
    rear=-1;
     printf("the deleted item is : %d",item);
    }
    else{
        item=queue[front];
    front++;
     printf("the deleted item is : %d",item);
    }
}
void display(){
    int i=front;
    for(;i<=rear;i++){
        printf("%d\t",queue[i]);
    }

}
void isempty(){
    if(front==-1 && rear==-1 )
    printf("the queue is empty");
    else
    printf("the queue is not empty");

}
int main(){
    int choice,data,choose=1;
    printf("\t\t program for operation on queue\n");
    while(choose){
    printf("Available operations are \n");
    printf("1.insert\n2.Display\n3.Delete\n4.isempty??\n\n");

    printf("enter your choice:\t");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        {
            printf("enter the data to insert \t");
            scanf("%d",&data);
            insert(data);
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            delete();
            break;
        }
        case 4:
        {
            isempty();
            break;
        }
    }
    printf("\nenter 1 to continue and 0 to terminate");
    scanf("%d",&choose);
    }
    return 0;

}