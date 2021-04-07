// Print Last N lines

void print_last_lines(char *str, int n) {
    if(n<=0)
        return;
    int count=0;
    char DELIM='\n';
    char *curr=NULL; 

    curr=strrchr(str, DELIM);

    if(curr==NULL){
        cout<<"Invalid string\n";
        return;
    }

    while(count<n){
        if(curr>str && *curr!=DELIM)
            --curr;
        
        if(*curr==DELIM){
            count++;
            --curr;
        }else if(curr==str)
                    break;
    }
    curr+=2;
    if(count<10)
        cout<<str;
    else
        cout<<curr;

}