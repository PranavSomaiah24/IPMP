// Swap 2 nodes to correct BST

class Solution {
    
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    
    void findSwap(Node *root, Node** first,Node** middle,Node** last,Node** prev){
        if(root){
            findSwap(root->left,first,middle,last,prev);
            
            if(!*prev){
                *prev=root;
            }else if(root->data<(*prev)->data){
                if(!*middle){
                    *middle= root;
                    *first=*prev;
                }
                else
                    *last=root;
                *prev=root;
            }else{
                *prev=root;
            }
            
            
            findSwap(root->right,first,middle,last,prev);
        }
    }
    
    
public:
    void correctBST( struct Node* root )
    {
        // add code here.
        Node *first=NULL,*last=NULL,*middle=NULL,*prev=NULL;
        
        findSwap(root,&first,&middle,&last,&prev);
        if(first && last){
            swap(first->data,last->data);
        }else if(first && middle){
            swap(first->data,middle->data);
        }
    }
};