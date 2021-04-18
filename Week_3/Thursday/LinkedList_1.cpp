//Pairwise Swap in linked list

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        
        if(!head)
            return NULL;
            
        Node *prev=NULL,*next=NULL,*curr=head;
        int count=0;
        while(curr && count<2){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        head->next=pairWiseSwap(curr);
        return prev;
    }
};