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

int search(int item){

    temp=head;
    int count=0,loc=0;
    if(head==NULL)      return 0;
    else{
    while(temp->next!=NULL){
        count++;
        if(temp->data==item)
        loc=count;
        temp=temp->next;
    }
    }
    return loc;

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

void deleteat(int pos){
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
        temp->next->prev=prev;
        free(temp);
    }
}

void selectdelete(int key){


}


int main(){
    int n,data,choice;
    int c=1;


    head=NULL;
    temp=NULL;

while(c){
    printf("\nopertion available\n");
    printf("1.Add Info\n");
    printf("2.forward Traversal \n");
    printf("3.backward Traversal \n");
    printf("4 check if the list is empty\n");
    printf("5.Insert At any position\n");
    printf("6.delete a node at any pos\n");
    printf("7.delete the node for given key\n");
    printf("8.count the number of nodes\n");
    printf("9.search for an element..\n");
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
            forwardDisplay();
            break;

        }
        case 3:
        {
            backwardDisplay();
            break;
        }
        case 4:
        {
            if(!countNode())
            printf("\nthe list is empty\n");
            else
            printf("\n the list is not empty\n");

            break;
        }
        case 5:
        {   int pos=-1;
            printf("Enter the data");
            scanf("%d",&data);
            printf("enter the position you want to insert");
            scanf("%d",&pos);
            insertAt(pos,data);
            break;


        }
        case 6:
        {
            int pos;
            printf("\nenter the position to delete\n");
            scanf("%d",&pos);
            deleteat(pos);
            break;
        }
        case 7:{
            int key;
            printf("\n enter the key to delete: ");
            scanf("%d",&key);
            selectdelete(key);
        }
        case 8:
        {
            printf("The number of nodes in the linked list is : \t %d",countNode() );
            break;
        }
        case 9:
        {
            int item=0;
            printf("\nEnter the item to search\n");
            scanf("%d",&item);
            if(search(item)>0)
            printf("\nthe element is found at %d ",search(item) );
            else
            printf("\n not found");
        }
    }
    printf("\n\npress 1 to continue with list operations and 0 to end program");
    scanf("%d",&c);
}

    return 0;
}