//Check pallindrome

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool checkP(Node **left,Node *right){
        if(right==NULL)
            return true;
        if(!(checkP(left,right->next)))
            return false;
            
        if((*left)->data==right->data){
            (*left)=(*left)->next;
            return true;
        }
        return false;
    }
    
    bool isPalindrome(Node *head)
    {
        return checkP(&head,head);
    }
};