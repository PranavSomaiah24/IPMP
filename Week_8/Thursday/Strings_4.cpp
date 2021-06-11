class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
         for(int i=0;i<s.length();i++)
         {
             if(s[i]==s[i+1])
             {
                 s.erase(s.begin()+i+1);
                 i--;
             } 
         }
         return s;
    }
};
