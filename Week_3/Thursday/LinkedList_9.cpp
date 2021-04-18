// Swap Odd and Even Nodes

void rearrange(Node** head)
{
    Node* even;
    Node *temp, *prev_temp;
    Node *i, *j, *k, *l, *ptr;
  
    temp = (*head)->next;
    prev_temp = *head;
  
    while (temp != NULL) {   
        Node* x = temp->next;
  
        if (temp->data % 2 != 0) {
            prev_temp->next = x;
            temp->next = (*head);
            (*head) = temp;
        }
        else {
            prev_temp = temp;
        }
        temp = x;
    }
  
    temp = (*head)->next;
    prev_temp = (*head);
  
    while (temp != NULL && temp->data % 2 != 0) {
        prev_temp = temp;
        temp = temp->next;
    }
    even = temp;
    prev_temp->next = NULL;
  
    i = *head;
    j = even;
  
    while (j != NULL && i != NULL) { 
        k = i->next;
        l = j->next;

        i->next = j;
        j->next = k;  

        ptr = j;   
        i = k;
        j = l;
    }
  
    if (i == NULL) {     
        ptr->next = j;
    }
  
}