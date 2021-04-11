// Find element occuring left no of times

class Solution{   
public:
    int getleftOccurrence(int arr[], int n) {
        unordered_set<int> hash;
        for(int i=0;i<n;i++){
            if(hash.find(arr[i])!=hash.end()){
                hash.erase(arr[i]);
            }else{
                hash.insert(arr[i]);
            }
        }
          unordered_set<int>::iterator i;
    i=hash.begin();
    return *i;
    }
  
};