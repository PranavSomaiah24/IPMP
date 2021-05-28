class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string res="",temp="";
        
        for(int i=0;i<s.size();i++){
            temp=temp+s[i];
            if(s[i]=='.'){
                res=temp+res;
                temp="";
            }
        }
        res=temp+'.'+res;
        return res.substr(0,res.size()-1);
    } 
};