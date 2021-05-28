// Connect Nodes at same level

class Solution {
public:
    Node *get_next_right(Node *root){
        auto temp = root -> next;

        while(temp){
            if(temp -> left)
            return temp->left;
            if(temp -> right)
            return temp -> right;
            temp = temp -> next;
        }

        return nullptr;
    }

    Node* connect(Node* root) {
        if(!root) 
            return nullptr;

        if(root -> left)
            root -> left -> next = (root -> right ? root -> right : get_next_right(root));
        
        if(root -> right)
            root -> right -> next = get_next_right(root);

        connect(root -> right);
        connect(root -> left);

        return root;
    }
};