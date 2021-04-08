// Merge 2 sorted Lists

Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *start=NULL,*end=NULL;
    
    while(head1 && head2){
        if(head1->data<=head2->data){
            if(start==NULL){
                start=head1;
                end=head1;
            }else{
                end->next=head1;
                end=head1;
            }
            head1=head1->next;
        }else{
            if(start==NULL){
                start=head2;
                end=head2;
            }else{
                end->next=head2;
                end=head2;
            }
            head2=head2->next;
        }
    }
    if(head1){
        end->next=head1;
        end=head1;
    }
    if(head2){
        end->next=head2;
        end=head2;
    }
    return start;
}  