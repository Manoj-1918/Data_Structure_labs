//  Remove Duplicates from Sorted List
// Solved Given the head of a sorted linked list, delete all duplicates such that each element 
// appears only once. Return the linked list sorted as well.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp1,*temp,*prev;
    temp=head;
    while(temp!=NULL){
        temp1=temp;
        while(temp1!=NULL){
            prev=temp;
            if(temp1->val == temp->val){
                //delete the node
                prev->next=temp1->next;
            }
            temp1=temp1->next;
        }
        free(temp1);
        temp=temp->next;
    }
    return head;
}