class Solution
{   
    
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
     
        for(int i=0;i<x.size();i++){
            if(x[i]=='['||x[i]=='{'||x[i]=='(')
                s.push(x[i]);
            else if(s.size()>=1)
                    if((s.top()=='['&&x[i]==']')||(s.top()=='{'&&x[i]=='}')||(s.top()=='('&&x[i]==')'))
                    s.pop();
                    else
                        return false;
                else{
                    
                    return false;
                }
        }
        if(s.size()>0)
            return false;
            
        return true;
    }

};