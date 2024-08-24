
//1290. Convert Binary Number in a Linked List to Integer
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int dec=0;
    struct ListNode *temp;
    temp=head;
    while(temp!=0){
        dec=dec*2+(temp->val);
        temp=temp->next;
    }
    return dec;
}