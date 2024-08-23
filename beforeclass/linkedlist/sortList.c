#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
    int data;
    struct Node *next;
}*head=NULL,*new_node=NULL,*temp=NULL;

void addData(int data){
        
        new_node=(struct Node*)malloc(sizeof(struct Node));
        new_node->data=data;
        new_node->next=NULL;
        if(head==NULL){
            head=new_node;
            temp=head;
        }
        else{
            temp->next=new_node;
            temp=new_node;
        }

}

void Display(){
        temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}


void sortlist(){
    int k;
    struct Node *temp1,*smallest;

    temp=head;
    while(temp!=NULL){
        smallest=temp;
        temp1=temp->next;
        while(temp1!=NULL){
            if(temp1->data<smallest->data){
                smallest=temp1;
            }
            temp1=temp1->next;
        }
        if (smallest != temp) {
            k = temp->data;
            temp->data = smallest->data;
            smallest->data = k;
        }
        temp=temp->next;
    }
}

int main(){

    int n,data,choice;
    int c=1;
    head=NULL;
    temp=NULL;

    printf("enter how many node you want to create");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("enter the data to store");
        scanf("%d",&data);
        addData(data);
        }

    Display();
    reverselist();  
    Display(); 

}