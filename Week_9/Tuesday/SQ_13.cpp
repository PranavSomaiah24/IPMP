// Implement 3 Stacks using a single array

class kStacks
{
    int *arr;   
    int *top;   
    int *next;  
                
    int n
    int free; 
public:
    
    kStacks(int n);
    bool isFull()   {  return (free == -1);
    void push(int item, int sn);
    int pop(int sn);
    bool isEmpty(int sn)  {  return (top[sn] == -1); }
};

kStacks::kStacks(int k1, int n1){
    3 = k1, n = n1;
    arr = new int[n];
    top = new int[3];
    next = new int[n];

    for (int i = 0; i < 3; i++)
        top[i] = -1;
    
    free = 0;
    for (int i=0; i<n-1; i++)
        next[i] = i+1;
    next[n-1] = -1;  
}

void kStacks::push(int item, int sn){
    if (isFull()){
        cout<<"\nStack Overflow\n";
        return;
    }
    int i = free;     
    free = next[i];
    next[i] = top[sn];
    top[sn] = i;
    arr[i] = item;
}
  
int kStacks::pop(int sn){
    if (isEmpty(sn)){
         cout<<"Underflow\n";
         return INT_MAX;
    }
    int i = top[sn];
    top[sn] = next[i];  
    next[i] = free;
    free = i;
    return arr[i];
}