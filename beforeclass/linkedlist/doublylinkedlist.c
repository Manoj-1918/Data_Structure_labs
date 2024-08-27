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

void insertAtStart(int data){
    new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->prev=NULL;
    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}

void inserAtend(int data){
    new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->prev=NULL;
    new_node->next=NULL;
    
    if(head==NULL){
        head=new_node;
        temp=head;
    }
    else{
        temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
        new_node->prev=temp;
        temp->next=new_node;
        tail=new_node;
    }
    

}

void insertAt(int pos,int data){
    new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=data;

    if(head==NULL){
        new_node->prev=NULL;
        new_node->next=NULL;
        head=new_node;
        temp=head;
    }
    else{
        temp=head;
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        new_node->prev=temp;
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->next->prev=new_node;
        
    }
}

int countNode(){
    int count=0;
    if (head==NULL) return count;
    else
    {
    temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    }
    return count;
}


int main(){
    int n,data,choice;
    int c=1;


    head=NULL;
    temp=NULL;

while(c){
    printf("\nopertion available\n");
    printf("1.Add Info\n");
    printf("2.Insert At Start\n");
    printf("3.Insert At End\n");
    printf("4.Insert At any position\n");
    printf("5.count the number of nodes\n");
    printf("6.Traversal/Display all data\n");
    printf("\n\n Enter your choice\t");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
        {
            printf("enter how many node you want to create");
            scanf("%d",&n);
            for (int i=0;i<n;i++){
                printf("enter the data to store");
                scanf("%d",&data);
                addData(data);
            }
            break;

        }
        case 2:
        {
            printf("Enter the data");
            scanf("%d",&data);
            insertAtStart(data);
            break;

        }
        case 3:
        {
            printf("Enter the data");
            scanf("%d",&data);
            inserAtend(data);
            break;


        }
        case 4:
        {   int pos=-1;
            printf("Enter the data");
            scanf("%d",&data);
            printf("enter the position you want to insert");
            scanf("%d",&pos);
            insertAt(pos,data);
            break;


        }
        case 5:
        {
            printf("The number of nodes in the linked list is : \t%d",countNode());
            break;
        }
        case 6:
        {
            printf("\n\n Traversal to the linked list..\n\n");
            forwardDisplay();
            printf("\n\n");

            backwardDisplay();
        }
    }
    printf("\n\npress 1 to continue with list operations and 0 to end program");
    scanf("%d",&c);
}

    return 0;
}