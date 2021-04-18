// Swap Kth node from beg with kth node from end

void swapKth(struct Node** head_ref, int k)
{   
    int n = getSize(*head_ref);
    if (n < k)
        return;

    if (2 * k - 1 == n)
        return;
    
    Node* x = *head_ref;
    Node* x_prev = NULL;
    for (int i = 1; i < k; i++) {
        x_prev = x;
        x = x->next;
    }
     
    Node* y = *head_ref;
    Node* y_prev = NULL;
    for (int i = 1; i < n - k + 1; i++) {
        y_prev = y;
        y = y->next;
    }
    if (x_prev)
        x_prev->next = y;
    
    if (y_prev)
        y_prev->next = x;  
    
    Node* temp = x->next;
    x->next = y->next;
    y->next = temp;
  
    if (k == 1)
        *head_ref = y;
    if (k == n)
        *head_ref = x;
}
