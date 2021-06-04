char *encode(char *src)
{     
  //Your code here 
  string s="";
  char curr;
  curr=src[0];
  int c=0,j=0;
  for(int i=0;src[i]!='\0';i++){
      
      if(src[i]==curr){
          c++;
      }else{
          s+=curr;
          s+=c+'0';
          curr=src[i];
          c=1;
      }
  }
  s+=curr;
  s+=c+'0';
  cout<<s;
  return "";
}     