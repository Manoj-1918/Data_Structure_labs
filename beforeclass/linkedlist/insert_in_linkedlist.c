#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
    char data[30];
    int age;
    struct Node *next;
}*head=NULL,*new_node=NULL,*temp=NULL;

void addData(char data[30],int age){
        
        new_node=(struct Node*)malloc(sizeof(struct Node));
        strcpy(new_node->data,data);
        new_node->age=age;
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
        printf("%s\t%d\n",temp->data,temp->age);
        temp=temp->next;
    }
}

//insertion at start

void insertAtStart(char data[30],int age){
    new_node=(struct Node*)malloc(sizeof(struct Node));
    strcpy(new_node->data,data);
    new_node->age=age;
    new_node->next=head;
    head=new_node;
}


//insertion at last

void inserAtend(char data[30],int age){
    new_node=(struct Node*)malloc(sizeof(struct Node));
    strcpy(new_node->data,data);
    new_node->age=age;
    
    if(head==NULL){
        head=new_node;
        temp=head;
    }
    else{
        temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
        temp->next=new_node;
    }
    

}


//insertion at any position

void insertAt(int pos,char data[30],int age){
    new_node=(struct Node*)malloc(sizeof(struct Node));
   strcpy(new_node->data,data);
   new_node->age=age;

    if(head==NULL){
        head=new_node;
        temp=head;
    }
    else{
        temp=head;
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        struct Node *k=temp->next;
        temp->next=new_node;
        temp=new_node;
        temp->next=k;
    }
}

void deleteAtStart(){
    temp=head;
    if(head==NULL)  printf("No nodes are created yet");
    else{
    head=temp->next;
    free(temp);
    }
}

void deleteAtEnd(){
    temp=head;
    if(head==NULL)     printf("NO nodes are created yet");
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void deleteAt(int pos){
    temp=head;
    struct Node *prev=NULL;
    if(head==NULL)  printf("NO nodes are created yet");
    else{
        while(pos>1){
            prev=temp;
            temp=temp->next;
            pos--;
        }
        prev->next = temp->next;
        free(temp);
    }
}

int main(){
    int n,age,choice;
    int c=1;
    char data[30];

    head=NULL;
    temp=NULL;

while(c){
    printf("\nopertion available\n");
    printf("Add Info\n");
    printf("Insert At Start\n");
    printf("Insert At End\n");
    printf("Insert At any position\n");
    printf("Display all data\n");
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
                scanf("%s%d",&data,&age);
                addData(data,age);
            }
            break;

        }
        case 2:
        {
            printf("Enter the data");
            scanf("%s%d",&data,&age);
            insertAtStart(data,age);
            break;

        }
        case 3:
        {
            printf("Enter the data");
            scanf("%s%d",&data,&age);
            inserAtend(data,age);
            break;


        }
        case 4:
        {   int pos=-1;
            printf("Enter the data");
            scanf("%s%d",&data,&age);
            printf("enter the position you want to insert");
            scanf("%d",&pos);
            insertAt(pos,data,age);
            break;


        }
        case 5:
        {
            Display();
        }
    }
    printf("press 1 to continue with list operations and 0 to end program");
    scanf("%d",&c);
}
deleteAt(4);
deleteAtEnd();
deleteAtStart();

Display();

    return 0;
}