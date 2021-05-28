void helper(node *p,node **succ){
   
    if(p){
        helper(p->right,succ);
        p->next=*succ;
        *succ=p;
        helper(p->left,succ);
    }
}

void populateNext(struct node* p)
{
    node *succ=NULL;
    helper(p,&succ);
}