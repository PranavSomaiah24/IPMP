string find(string s1, string s2)
{
    int l1=s1.length();
    int l2=s2.length();
    
    if(l1<l2)
        return "";
        
    int hp[256]={0};
    int hh[256]={0};
    
    for(int i=0;i<l2;i++)
        hp[s2[i]]++;
    
    int count=0,start=0,start=-1, minL=INT_MAX;
    for(int i = 0;i<l1;i++)
    {
        hh[s1[i]]++;
        
        if(hp[s1[i]]!=0 && hp[s1[i]]>=hh[s1[i]])
            count++;
        
        if(count==l2)
        {
            while(hh[s1[start]]>hp[s1[start]] || hp[s1[start]]==0)
            {
                if(hh[s1[start]]>hp[s1[start]])
                    hh[s1[start]]--;
                start++;    
            }

        
        int minWin=i-start+1;
        if(minL>minWin)
        {
            start = start;
            minL=minWin;
        }   
        }
        
    }
    if (start==-1)
    {
        return "";
    }
    return s1.substr(start,minL);
}