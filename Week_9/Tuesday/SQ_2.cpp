// Implement stack using 2 queues

void QueueStack :: push(int x)
{
        // Your Code
        if(!q1.size()){
            q1.push(x);
            while(q2.size()>0){
                q1.push(q2.front());
                q2.pop();
            }
        }else{
            q2.push(x);
            while(q1.size()>0){
                q2.push(q1.front());
                q1.pop();
            }
        }
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code  
        if(q1.size()>0){
            int x = q1.front();
            q1.pop();
            return x;
        }else if(q2.size()>0){
             int x = q2.front();
            q2.pop();
            return x;
        }
        
        return -1;
}