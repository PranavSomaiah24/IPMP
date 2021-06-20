// Design a stack that supports getMin() in O(1) time and O(1) extra space

struct MyStack
{
    stack<int> s;
    int minElement;
    
    void getMin()
    {
        if (s.empty())
            cout << "Stack empty\n";
        else
            cout <<"Minimum Element: "<< minElement << "\n";
    }
 
    void peek()
    {
        if (s.empty())
        {
            cout << "Stack is empty ";
            return;
        }
 
        int t = s.top(); 
        cout << "Top Most Element is: ";
        (t < minElement)? cout << minElement: cout << t;
    }
 
    
    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is empty\n";
            return;
        }
        int t = s.top();
        s.pop();
 
        if (t<minElement)
        {
            cout <<minElement<<"\n";
            minElement = 2*minElement - t;
        }
 
        else
            cout <<t<<"\n";
    }
 
    
    void push(int x)
    {
        if (s.empty())
        {
            minElement = x;
            s.push(x);
            cout <<"Inserted: "<<x<<"\n";
            return;
        }
        if (x < minElement)
        {
            s.push(2*x - minElement);
            minElement = x;
        }
        else
           s.push(x);
 
        cout <<"Inserted: "<<x<<"\n";
    }
};