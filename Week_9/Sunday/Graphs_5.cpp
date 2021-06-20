// Max BPM

bool dfs(bool bp[M][N],int n,int m,int s,bool vis[],int parent[]){
    for(int i=0;i<n;i++){
        if(vis[i]==false&&bp[s][i]){
            vis[i]=true;
            if(parent[i]<0 ||dfs(bp,n,m,parent[i],vis,parent)){
                parent[i]=s;
                return true;
            }
        }
    }
    return false;
}
int maxBPM(bool bp[M][N],int m,int n)
{
//add code here.
 int parent[n];
 memset(parent,-1,sizeof(parent));
 int res=0;
 for(int i=0;i<m;i++){
     bool vis[n];
     memset(vis,false,sizeof(vis));
     if(dfs(bp,n,m,i,vis,parent))
       res++;
 }
 return res;
}