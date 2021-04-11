// Delete Alternate Node in Linked list

void deleteAlt(struct Node *head){
    // Code here
    if(head==NULL)
        return;
    Node *prev=head, *next=NULL,*temp;
    head=head->next;
    while(head!=NULL){
        next=head->next;
        prev->next=next;
        prev=next;
        
        if(next!=NULL)
            head=next->next;
        else
            head=NULL;
    }
    
}