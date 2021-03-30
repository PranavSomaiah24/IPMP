//Find position of first 1 in inf stream of 0 and 1 sorted array

#include <bits/stdc++.h>

using namespace std;

int findMax(int arr[],int N){
    int i,mid;
    for(i=0;pow(2,i)<N;i++){
        int k=pow(2,i);
        if(arr[k]==1)
            break;
    }
    int l=pow(2,i-1);
    int r=pow(2,i);
    
    while(arr[l+1]!=1){
        mid=l+(r-l)/2;
        if(arr[mid]==0){
            l=mid;
        }else{
            r=mid;
        }
    }
    return l+1;
}


int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<findMax(arr,N);
    return 0;
}
