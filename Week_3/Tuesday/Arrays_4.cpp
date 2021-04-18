//Two repeated elements in array

pair<int,int> twoRepeated (int arr[], int N)
{   pair<int,int> PAIR1;
    vector <int> count(N+1,0);int a[2];
    
    for(int i=0,k=0;i<N+2;i++){
        if(count[arr[i]]==1){
            a[k++]=arr[i];
        }else{
            count[arr[i]]++;
        }
    }
    PAIR1.first=a[0];
    PAIR1.second=a[1];
    return PAIR1;
}