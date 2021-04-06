// Delete linked list

void deleteList(struct Node* head)
{
    if (head == NULL)
        return;
    deleteList(head->next); 
    free(head);
}