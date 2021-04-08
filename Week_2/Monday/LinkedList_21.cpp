// Reverse Nodes in alternate groups of k

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    {   
        if(!head)
            return NULL;
            
        node *prev=NULL,*next=NULL,*curr=head;
        int count=0;
        while(curr && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }

        head->next=curr;
        count=1;
        while(curr && count<k){
            curr=curr->next;
            count++;
        }
        if(curr){
            curr->next=reverse(curr->next,k);
        }
        
        return prev;
    }
};