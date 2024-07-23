class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return nullptr;
        }

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* tail = dummy;

        while(tail != NULL && tail->next != NULL){
            if(tail->next->val == val){
                ListNode* temp = tail->next;
                tail->next = tail->next->next;
                delete(temp);
            }
            else{
                tail = tail->next;
            }
        }
        return dummy->next;
    }
};
