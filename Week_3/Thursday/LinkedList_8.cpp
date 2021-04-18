// Add two numbers represented by Linked Lists

Node* addSameSize(Node* head1, Node* head2, int* carry){
    if(!head1 && !head2)
        return NULL;
    Node* result = new Node[(sizeof(Node))];

    result->next=addSameSize(head1->next,head2->next,carry);

    int sum=head1->data+head2->data+*carry;
    *carry=sum/10;
    result->data=sum%10;

    return result;
}

void addCarryToRemaining(Node* head1, Node* curr,int *carry, Node** result){


    if(head1!=curr){
        addCarryToRemaining(head1->next,curr,carry,result);
        int sum=head->data+*carry;
        *carry=sum/10;
        sum=sum%10;
        push(result,sum);
    }
}

void addList(Node* head1, Node* head2, Node** result)
{
    Node* cur;
    if (head1 == NULL) {
        *result = head2;
        return;
    }
    else if (head2 == NULL) {
        
        *result = head1;
        return;
    }
    int size1 = getSize(head1);
    int size2 = getSize(head2);
    int carry = 0;

    if (size1 == size2)
        *result = addSameSize(head1, head2, &carry);
 
    else {
        int diff = abs(size1 - size2);

        if (size1 < size2)
            swapPointer(&head1, &head2);

        for (cur = head1; diff--; cur = cur->next);
        
        *result = addSameSize(cur, head2, &carry);
        addCarryToRemaining(head1, cur, &carry, result);
    }
 
    if (carry)
        push(result, carry);
}