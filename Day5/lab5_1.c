#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev,*next;
}*head,*tail,*temp,*new_node;

void addData(int data){
        new_node=(struct Node*)malloc(sizeof(struct Node));
        new_node->data=data;
        new_node->next=NULL;
        new_node->prev=NULL;
        if(head==NULL){
            head=new_node;
            temp=head;
            tail=temp;

        }
        else{
            new_node->prev=temp;
            temp->next=new_node;
            temp=new_node;
            tail=temp;
        }

}

void forwardDisplay(){
        temp=head;
    while(temp!=NULL){
        printf("%d\t%d\t%d\n",temp->data,temp->next,temp->prev);
        temp=temp->next;
    }
}

void backwardDisplay(){
        temp=tail;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->prev;
    }
}

int main(){
    int n=0;
    int data;
    printf("\t\t Program to create and display doubly linked list\n");
            printf("enter how many node you want to create");
            scanf("%d",&n);
            for (int i=0;i<n;i++){
                printf("enter the data to store");
                scanf("%d",&data);
                addData(data);
            }
            printf("\n\n");
            forwardDisplay();
            printf("\n\n");
            backwardDisplay();

}