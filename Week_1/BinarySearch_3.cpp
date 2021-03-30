//Ceiling of element in sorted array

#include <iostream>

using namespace std;

int ceiling(int arr[],int x,int N){
    int l=0,r=N-1,mid;
    
    if(x>arr[r])
        return -1;
        
    while(l<=r){
        mid=l+(r-l)/2;
        
        if((mid==0||x>arr[mid-1])&&arr[mid]>=x){
            return arr[mid];
        }
        if(arr[mid]>x){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}


int main()
{
    int N,x;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cin>>x;
    cout<<ceiling(arr,x,N);
    return 0;
}
