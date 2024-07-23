class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode* curr = head;
     ListNode* nextCurr;
        
        if(curr == NULL){
            return NULL;
        }
        
        while(curr->next != NULL){
            if(curr->val == curr->next->val){
                nextCurr=curr->next->next;
                delete(curr->next);
                curr->next = nextCurr;
            }
            
            else{
                curr = curr->next;
            }
        }
        
        return head;
    }
};
