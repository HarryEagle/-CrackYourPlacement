class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node* temp = head;
        while(temp -> next){
            if(temp -> data < temp -> next -> data){
                temp -> data = temp -> next -> data;
                Node* temp2 = temp->next;
                temp->next = temp2 -> next->next;
                delete temp2;
                temp = head;
            }
            else
                temp=temp -> next;
        }
        return head;
    }
    
};
