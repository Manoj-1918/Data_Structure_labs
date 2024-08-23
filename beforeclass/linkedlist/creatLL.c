#include<stdio.h>
#include<stdlib.h>
// creating structure for node (making data type)
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=NULL,*new_node,*temp;
    int choice=1;
    while(choice){
    new_node=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data value \t");
    scanf("%d",&new_node->data);
    new_node->next=0;


    if(head==NULL){
        head=new_node;
        temp=head;
        //new_node->data=Data;
    }
    else{
        
        temp->next=new_node;
        temp=new_node;
        //temp->data=Data;
    }
    printf("enter 1 for adding again and 0 to print all data");
    scanf("%d",&choice);
    }
    temp=0;
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;

    }
    return 0;
}