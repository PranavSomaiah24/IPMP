class LRUCache
{
    private:
        list<pair<int,int>> dq;
        unordered_map<int, list<pair<int,int>>::iterator> hm;
        int size;
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code her
        size=cap;
    }
    
    //Function to return value corresponding to the key.
     int get(int key)
    {
        // your code here
        if(hm.find(key)!=hm.end()){
            list<pair<int,int>>::iterator i=hm[key];
            dq.erase(i);
            dq.push_front({i->first,i->second});
            hm[i->first]=dq.begin();
            return i->second;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
     void set(int key, int value)
    {
        // your code here   
        if(hm.find(key)==hm.end()){
            if(dq.size()==size){
               int last=dq.back().first;
               dq.pop_back();
              
                hm.erase(last);
            }
        }else{
            dq.erase(hm[key]);
        }
        
        dq.push_front({key,value});
        hm[key]=dq.begin();
    }
};