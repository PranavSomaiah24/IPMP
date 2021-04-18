// Merge a linked list into another at alternate positions

void merge(Node *p, Node **q)
{
Node *t1=p,*t2=*q,*next;

    while( t1 && t2){
        next=t1->next;
        t1->next=t2;
        t2=t2->next;
        t1->next->next=next;
        t1=next;
    }
        *q=t2;
}