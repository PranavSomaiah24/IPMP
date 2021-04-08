// Rotate linked list by k nodes

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {   Node *t=head,*end,*prev;
        int c=0;
        while(t){
            c++;
            if(c==k){
                end=t;
            }
            prev=t;
            t=t->next;
        }
        if(end==prev)
            return head;
        Node *res=end->next;
        end->next=NULL;
        prev->next=head;
        return res;
    }
};