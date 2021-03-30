// Majority element in sorted array

#include <iostream>

using namespace std;

bool checkMajority(int arr[],int x,int N){
    int l=0,r=N-1,mid;
    
    while(l<=r){
        mid=l+(r-l)/2;
        
        if((mid==0 ||x>arr[mid-1])&&arr[mid]==x){
            if(arr[mid+N/2]==x)
                return true;
            return false;
        }
        if(arr[mid]>=x){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return false;
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
    cout<<(checkMajority(arr,x,N)?"True":"False");
    return 0;
}
