#include<stdio.h>
#include<stdlib.h>
// linkedlist will be used to create the binary tree...
struct node{
    int val;
    struct node *left;
    struct node *right;
};

struct node* createNode(){
    int x;
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));

    printf("enter the value for node and if no child then enter -1 ");
    scanf("%d",&x);
    if(x==-1)        return NULL;
    newNode->val=x;
    printf("enter the leftchild of %d",x);
    newNode->left=createNode();
    printf("enter the right child of %d,x");
    newNode->right=createNode();
    return newNode;
}

int main(){
    struct node *root;
    root=createNode();
}