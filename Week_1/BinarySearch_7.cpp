//Find Max Peak

#include <iostream>

using namespace std;

int findMax(int arr[],int N){
    int l=0,r=N-1,mid;
    
    while(l<=r){
        mid=l+(r-l)/2;
        
        if(mid==0 && arr[mid]>arr[mid+1])
            return arr[mid];
        else if(mid==N-1 && arr[mid]>arr[mid-1])
            return arr[mid];
        else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return arr[mid];
            
        if(arr[mid]<arr[mid+1]){
            l=mid+1;
        }else 
        if(arr[mid]<arr[mid-1]){
            r=mid-1;
        }
    }
    return -1;
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
