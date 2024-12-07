 #include <stdio.h>
 #include<stdlib.h>
 struct ListNode {
     int val;
     struct ListNode *next;
};
struct ListNode* create(int data){
    struct ListNode *newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val=data;
    newNode->next=NULL;
    return newNode;
}
struct ListNode* insertNode(struct ListNode *l3,int data){
    struct ListNode* temp=NULL;   
    temp=l3;
    if(l3==NULL)    
    l3=create(data);
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=create(data);

    }
    return l3;

}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l3=NULL;
    int data=0;
    int forward=0;
        while(l1!=NULL && l2!=NULL){
            data=(l1->val+l2->val+forward)%10;
            forward=(l1->val+l2->val+forward)/10;
            l3=insertNode(l3,data);
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            data=(l1->val+forward)%10;
            forward=(l1->val+forward)/10;
            l3=insertNode(l3,data);
            l1=l1->next;
        }
        while(l2!=NULL){
            data=(l2->val+forward)%10;
            forward=(l2->val+forward)/10;
            l3=insertNode(l3,data);
            l2=l2->next;
        }

        if(forward>0) {
        l3 = insertNode(l3, forward);
    }
    return l3;
    
}
// add the main function to run..