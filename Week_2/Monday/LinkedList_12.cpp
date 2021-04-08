// Intersection of two unsorted lists in order of apperance in list 1

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {   unordered_set<int> hash;
        Node *temp=new Node(0),*head=temp;
        if(head2==NULL){
            return NULL;
        }
        while(head2){
            hash.insert(head2->data);
            head2=head2->next;
        }
        while(head1){
            if(hash.find(head1->data)!=hash.end()){
                Node *n=new Node(head1->data);
                temp->next=n;
                temp=n;
            }
            head1=head1->next;
        }
        return head->next;
    }
};