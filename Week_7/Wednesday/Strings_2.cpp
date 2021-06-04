// Remove s2 chars from s1

class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        string res="";
        int count[256]={0};
        for(int i=0;i<string2.size();i++){
            count[string2[i]]++;
        }
        
        for(int i=0;i<string1.size();i++){
            if(count[string1[i]]==0){
                res=res+string1[i];
            }
        }
        return res;
    }
};