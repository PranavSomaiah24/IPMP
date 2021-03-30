//Find Fixed Point

#include <iostream>

using namespace std;

int findFixedPoint(int arr[],int N){
    int l=0,r=N-1,mid;
    
    while(l<=r){
        mid=l+(r-l)/2;
        
        if(arr[mid]==mid){
            return arr[mid];
        }    
        if(arr[mid]>mid){
            r=mid-1;
        }else{
            l=mid+1;
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
    cout<<findFixedPoint(arr,N);
    return 0;
}
