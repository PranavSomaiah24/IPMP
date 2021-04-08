//Function to sort a linked list of 0s, 1s and 2s.

class Solution
{
    public:
    
    Node* segregate(Node *head) {
        if(!head)
            return NULL;
            
        int count[3]={0},i=0;
        Node *temp=head;
        
        while(temp){
            count[temp->data]++;
            temp=temp->next;
        }
        temp=head;
        
        while(temp){
            if(count[i]!=0){
                count[i]--;
                temp->data=i;
                temp=temp->next;
            }else{
                i++;
            }
        }
        return head;
    }
};