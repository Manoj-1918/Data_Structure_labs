#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*front=NULL,*rear=NULL;

void insert(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;

    if(front==NULL && rear==NULL){
        front=newnode;
        rear=front;
    }
    else{
        rear->next =newnode;
        rear=rear->next;

    }
}
void display(){
    struct node *temp=NULL;
    temp=front;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }


}

void delete(){
    struct node *temp=NULL;
    if(front==NULL)
    printf("underflow error");
    else{
        temp=front;
        int item=front->data;
        front=front->next;
        free(temp);

    }

}
 void isempty(){
    if(front==NULL)
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
