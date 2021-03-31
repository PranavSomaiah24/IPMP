// Largest even number(or odd) from given integer S using counting sort
//Time complexity O(n)
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string LargestEven(string S){
        //complete the function here
        vector<int> a;
        for(int i=0;i<S.length();i++){
            a.push_back(S[i]-'0');
        }
        int min=INT_MAX,index;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0 && a[i]<min){
                min=a[i];
                index=i;
            }
        }
        if(min==INT_MAX){
            for(int i=0;i<a.size();i++){
                if(a[i]%2==1 && a[i]<min){
                    min=a[i];
                    index=i;
                }
            }
        }
        int temp=a[index];
        a[index]=a[0];
        a[0]=temp;
        
        int count[10]={0};
        for(int i=1;i<a.size();i++){
            ++count[a[i]];
        }
        for(int i=1;i<10;i++){
            count[i]+=count[i-1];
        }
        int res[a.size()];
        for(int i=a.size()-1;i>0;i--){
            res[--count[a[i]]+1]=a[i];
        }
        res[0]=a[0];
    string r;
    for(int i=a.size()-1;i>=0;i--){
            r.push_back(res[i]+'0');
        }
    
    return r;
    }  
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.LargestEven(s) << "\n";
    }
return 0;
}

  // } Driver Code Ends