// Check if given 2 trees are isomorphic

bool isIsomorphic(node* n1, node *n2)
{
 
 if (!n1 && !n2)
    return true;
  
 
 if (!n1 || !n2)
    return false;
  
 if (n1->data != n2->data)
    return false;
  
 return 
 (isIsomorphic(n1->left,n2->left) && isIsomorphic(n1->right,n2->right))||
 (isIsomorphic(n1->left,n2->right) && isIsomorphic(n1->right,n2->left));
}