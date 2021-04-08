// Find intersection point

int intersectPoint(Node* head1, Node* head2)
{
    int c1=0,c2=0,d,c=0;
    Node *t=head1;
    while(t){
        t=t->next;
        c1++;
    }
    t=head2;
    while(t){
        t=t->next;
        c2++;
    }
    
    if(c1>=c2){
        d=c1-c2;
        for (int i = 0; i < d; i++) {
            if (head1 == NULL) {
                return -1;
            }
            head1 = head1->next;
    }
    }else{
        d=c2-c1;
        for (int i = 0; i < d; i++) {
            if (head2 == NULL) {
                return -1;
            }
            head2 = head2->next;
    }
    }
    
    while(head1 && head2){
        
        if(head1==head2){
            return head1->data;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}