// Find intersection of two sorted Lists

Node* findIntersection(Node* head1, Node* head2)
{
    Node *temp=NULL,*head=NULL;;
    while(head1 && head2){
        if(head1->data==head2->data){
            
            Node *n=new Node(head1->data);
            if(temp==NULL){
                temp=n;
            }else{
            temp->next=n;
            temp=n;}
            if(head==NULL){
                head=temp;
            }
            head1=head1->next;
            head2=head2->next;
        }else
        if(head1->data<head2->data){
            head1=head1->next;
        }else{
            head2=head2->next;
        }
    }
    return head;
}