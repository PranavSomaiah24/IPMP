int majorityElement(int a[], int size)
{
    unordered_map<int, int> map;
    for(int i = 0; i < size; i++)
        map[arr[i]]++;
    
    for(auto i:map){
        if(i.second>size/2)
            return i.first;
    }
    return -1;
}