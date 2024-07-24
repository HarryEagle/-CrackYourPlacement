class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long mod = 1000000007;
        Node* temp1 = first;
        Node* temp2 = second;
        long long digit1 = 0;
        
        while(temp1 != NULL){
            digit1 = (digit1*10)%mod+temp1->data;
            temp1=temp1->next;
        }
        
        long long digit2 = 0;
        while(temp2 != NULL){
            digit2 = (digit2*10)%mod + temp2->data;
            temp2 = temp2->next;
        }
        
        return (digit1*digit2)%mod;
    }
};
