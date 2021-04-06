//Get Nth node from end

int getNthFromLast(Node *head, int n)
{
       int size=0,i=0;
       Node *t=head;
       while(t!=NULL){
           t=t->next;
           size++;
       }
       if(n>size){
           return -1;
       }
       t=head;
       while(i!=(size-n) && t!=NULL){
            t=t->next; 
            i++;
       }
       return t->data;
}