// Median from a running stream

#include <bits/stdc++.h>
using namespace std;

int getMedian(int e, int &m, priority_queue<int> &l, priority_queue<int, vector<int>, greater<int> > &r)
{
    int sig;
    if(l.size()==r.size())
        sig=0;
    else if(l.size()>r.size())
        sig=1;
    else sig=-1;
    switch(sig)
    {
    case 1: 
        if( e < m ) 
        {

            r.push(l.top());
            l.pop();
            l.push(e);
        }
        else
        {
            r.push(e);
        }
  
        
        m = (l.top()+ r.top())/2;
  
        break;
  
    case 0: 
  
        if( e < m ) 
        {
            l.push(e);
            m = l.top();
        }
        else
        {
            
            r.push(e);
            m = r.top();
        }
  
        break;
  
    case -1: 
  
        if( e < m ) 
        {
            l.push(e);
        }
        else
        {

            l.push(r.top());
            r.pop();
            
            r.push(e);
        }
  
        
         m = (l.top()+ r.top())/2;
  
        break;
    }
  
    
    return m;
}
  
void printMedian(int A[], int size)
{
    int m = 0; 
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int> > minHeap;
  
    for(int i = 0; i < size; i++)
    {
        m = getMedian(A[i], m, maxHeap, minHeap);
  
        cout << m << endl;
    }
  
}

int main()
{
    int A[] = {5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4};
    int size = sizeof(A)/sizeof(int);
  
    
    printMedian(A, size);
  
    return 0;
}