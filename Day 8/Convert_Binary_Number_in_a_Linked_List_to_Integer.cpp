class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        ListNode* curr = head;

        while(curr != nullptr){
            res = res*2 + curr->val;
            curr=curr->next;
        }
        return res;
    }
};
