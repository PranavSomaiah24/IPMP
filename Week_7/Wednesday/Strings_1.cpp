//Function is to check whether two strings are anagram of each other or not.

class Solution
{
    public:

    bool isAnagram(string a, string b){
        
        // Your code here
        int count[26]={0};
        
        for(int i=0;i<a.size();i++){
            count[a[i]-'a']++;
        }
        for(int i=0;i<b.size();i++){
            if(count[b[i]-'a']<1)
                return false;
            count[b[i]-'a']--;
        }
        return true;
    }

};