// use the same code to create a binary tree first
// three traversal method is to be implemented i.e inorder, preorder and postorder.

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
    // since we are using -1 as terminating condition so we cant have -1 as value of node in tree
    printf("\nenter the value for node and if no child then enter -1:\t ");
    scanf("%d",&x);
    if(x==-1)        return NULL;
    newNode->val=x;
    printf("\nenter the leftchild of %d",x);
    newNode->left=createNode();
    printf("\nenter the right child of %d,x");
    newNode->right=createNode();
    return newNode;
}
// preorder function for traversal
void preorderTraversal(struct node *root){
    // printing patter in preorder is root left right
    if(root==NULL)      return;
    printf("%d\t",root->val);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main(){
    struct node *root;
    root=createNode();
    preorderTraversal(root);
    return 0;
}