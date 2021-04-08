// Split alternate Node in Linked List

void alternatingSplitList(struct Node* head) 
{
     Node *leftHead=NULL,*leftTail=NULL,*rightHead=NULL,*rightTail=NULL;
        Node * curr=head;
        int c=1;
        while(curr){
            if(c&1){
                if(!leftHead){
                    leftHead=curr;
                    leftTail=curr;
                }else{
                    leftTail->next=curr;
                    leftTail=leftTail->next;
                }
            }else{
                if(!rightHead){
                    rightHead=curr;
                    rightTail=curr;
                }else{
                    rightTail->next=curr;
                    rightTail=rightTail->next;
                }
            }
            curr=curr->next;
            c++;
        }
        a=leftHead;
        if(leftTail){
            leftTail->next=NULL;
        }
        b=rightHead;
        if(rightTail){
            rightTail->next=NULL;
        }
}