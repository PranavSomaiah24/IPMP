// Skip M nodes And delete N nodes

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {   
        
        //Add code here
        
        if(N==0)
            return;
        
        int c=0;
        Node *curr=head,*prev=NULL,*del;
        while(curr && c<M){
            prev=curr;
            curr=curr->next;
            c++;
        }
        if(!curr)
            return;
        del=curr;
        c=0;
        while(curr && c<N-1){
            curr=curr->next;
            c++;
        }
        if(curr!=NULL){
        prev->next=curr->next;
        curr->next=NULL;
        }else{
            prev->next=NULL;
        }
        
        linkdelete(prev->next,M,N);
    }
};