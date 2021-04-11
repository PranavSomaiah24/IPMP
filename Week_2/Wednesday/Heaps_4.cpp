// Huffman Coding using priority queue as minHeap

#include <iostream>
#include <queue>
using namespace std;

#define MAX_SIZE 100

class Node {
public:
    char data;
    int freq;
    Node* left;
    Node* right;
    
    Node(char character,
                    int frequency)
    {
        data = character;
        freq = frequency;
        left = right = NULL;
    }
};
class Compare{
    public:
    bool operator()(Node *a,Node *b){
        return a->freq>b->freq;
    }
};
Node* buildTree(priority_queue<Node*, vector<Node*>, Compare> pq)
{
    
    while (pq.size() != 1) {
  
        Node* left = pq.top();

        pq.pop();

        Node* right = pq.top();

        pq.pop();

        Node* node = new Node('$', left->freq + right->freq);

        node->left = left;
        node->right = right;

        pq.push(node);
    }
  
    return pq.top();
}
void printCodes(Node* root,int arr[], int top)
{

    if (root->left) {
        arr[top] = 0;
        printCodes(root->left,
                   arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (!root->left && !root->right) {
        cout << root->data << " ";
        for (int i = 0; i < top; i++) {
            cout << arr[i];
        }
        cout << endl;
    }
}
void HuffmanCodes(char data[],
                  int freq[], int size)
{
  
    priority_queue<Node*,vector<Node*>, Compare> pq;

    for (int i = 0; i < size; i++) {
        Node* newNode
            = new Node(data[i], freq[i]);
        pq.push(newNode);
    }
  
    Node* root = buildTree(pq);

    int arr[MAX_SIZE], top = 0;
    printCodes(root, arr, top);
}

int main()
{
    char data[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
    int size = sizeof(data) / sizeof(data[0]);

    HuffmanCodes(data, freq, size);
    return 0;
}