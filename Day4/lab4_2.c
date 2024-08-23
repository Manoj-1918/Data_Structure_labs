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
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

int searchInList(int data){
    int a=0,location=0;
    temp=head;
        while(temp!=NULL){
            a++;
        if(data==temp->data)    location=a;   
        temp=temp->next;
    }
    
    return location;

}

void reverseList(){
    struct Node *current,*prev,*nextNode;
    current=head;
    nextNode=head;
    prev=NULL;
    if(head==NULL)  printf("\nno data is stored yet \n");
    else{
    current=head;
    prev=NULL;
    while(nextNode!=0){
        nextNode=nextNode->next;
        current->next=prev;
        prev=current;
        current=nextNode;  
    }
    head=prev;
    
    printf("The reversed list is as follow\n\n");
    Display();
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

Display();
}


int main(){
    int n,data,choice;
    int c=1;


    head=NULL;
    temp=NULL;

while(c){
    printf("\nopertion available\n");
    printf("1.Add Info\n");
    printf("2.search the data in list\n");
    printf("3.sort the list in ascending order\n");
    printf("4.reverse the list\n");
    printf("5.Traversal/Display all data\n");
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
            int location=0;
            printf("Enter the data");
            scanf("%d",&data);
            location=searchInList(data);
            if(location==0)     printf("data not found inlist");
            else{
            printf("the data is found at %d  node of list",location);
            }
            break;

        }
        case 3:
        {

            sortlist();
            break;


        }
        case 4:
        {
           reverseList();
            break;


        }

        case 5:
        {
            printf("\n\n Traversal to the linked list..\n\n");
            Display();
        }
    }
    printf("\n\npress 1 to continue with list operations and 0 to end program");
    scanf("%d",&c);
}

    return 0;
}