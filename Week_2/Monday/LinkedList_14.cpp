//Seperate consonant and vowel nodes

class Solution{
public:
    Node* divide(int N, Node *head){
       Node *consonantHead=NULL,*consonantTail=NULL,*vowelHead=NULL,*vowelTail=NULL;
        Node * curr=head;
        while(curr){
            if(curr->data&1){
                if(!consonantHead){
                    consonantHead=curr;
                    consonantTail=curr;
                }else{
                    consonantTail->next=curr;
                    consonantTail=consonantTail->next;
                }
            }else{
                if(!vowelHead){
                    vowelHead=curr;
                    vowelTail=curr;
                }else{
                    vowelTail->next=curr;
                    vowelTail=vowelTail->next;
                }
            }
            curr=curr->next;
        }
        if(vowelTail){
            vowelTail->next=consonantHead;
        }else{
            vowelHead=consonantHead;
        }
        if(consonantTail){
            consonantTail->next=NULL;
        }
        return vowelHead;
    }
};