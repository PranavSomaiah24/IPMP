// atoi function

int main()
{
    string s;
    cin>>s;
    
    int res=0;
    for(int i=0;i<s.size();i++){
        res=res*10+(s[i]-'0');
    }
    
    cout<<res;
    return 0;
}