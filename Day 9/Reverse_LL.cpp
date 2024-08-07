class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = curr->next;
        
        while(curr != NULL){
            //forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            if(forward!=NULL){
                forward = curr->next;
            }
        }
        head = prev;
        return head;
    }
};
