// Merger Sort for Linked List

void FrontBackSplit(Node* source,
                    Node** frontRef, Node** backRef)
{
    Node* fast;
    Node* slow;
    slow = source;
    fast = source->next;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
 
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}

Node *sortedMerge(Node *a,Node *b){
    if(!a)
        return b;
    if(!b)
        return a;
    Node *temp; 
    if(a->data<b->data){
        temp=a;
        temp->bottom=merge(a->bottom,b);
    }else{
        temp=b;
        temp->bottom=merge(a,b->bottom);
    }
    
    return temp;
}

void MergeSort(Node** headRef)
{
    Node* head = *headRef;
    Node* a;
    Node* b;
 
   
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
 
    FrontBackSplit(head, &a, &b);
  
    MergeSort(&a);
    MergeSort(&b);
    
    *headRef = SortedMerge(a, b);
}