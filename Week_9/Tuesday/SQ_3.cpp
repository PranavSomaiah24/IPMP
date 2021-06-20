// Implement queue using 2 stacks

void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code  
        
        if(s1.empty() && s2.empty())
            return -1;
        
        
        if(s2.size()<=0){
            while(s1.size()>0){
                s2.push(s1.top());
                s1.pop();
            }
            int x=s2.top();
            s2.pop();
            return x;
        }
        int x = s2.top();
        s2.pop();
        return x;
        
}