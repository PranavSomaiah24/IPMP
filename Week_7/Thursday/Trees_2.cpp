int isSumProperty(struct node* node)
{
	if(node){
	    int left=0,right=0;
	    
	    int lb=isSumProperty(node->left);
	    int rb=isSumProperty(node->right);
	    if(node->left)
	        left=node->left->data;
	    if(node->right)
	        right=node->right->data;
	        
	   if(left==0 && right==0)
	        return 1;
	        
	   if(!(node->data==left+right && lb && rb))
	        return 0;
	}
	return 1;
}