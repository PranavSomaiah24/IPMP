//Function to find the first non-repeating character in a string.

class Solution
{
    public:

    char nonrepeatingCharacter(string s)
    {
       //Your code here
       int hash[26]={0};
       char res='$';
       for(int i=0;i<s.size();i++){
           hash[s[i]-'a']++;
       }
       for(int i=0;i<s.size();i++){
           if(hash[s[i]-'a']==1){
               res=s[i];
               break;
           }
       }

       return res;
    }

};