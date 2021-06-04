// Find rank of string

int findRank(string str)
{
    int len = strlen(str);
    int mul = fact(len);
    int rank = 1, i;
 
    
    int count[256] = { 0 };
 
    for(int i=0;i<str.size();i++){
        count[str[i]]++;
    }
    for(int i=1;i<256;i++){
        count[i]+=count[i-1];
    }
    for (i = 0; i < len; ++i) {
        mul /= len - i;
        rank += count[str[i] - 1] * mul;

        for(int i=str[i];i<256;i++){
            count[i]--;
        }
    }
 
    return rank;
}