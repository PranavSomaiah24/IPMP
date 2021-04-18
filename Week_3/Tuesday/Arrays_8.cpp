//Max difference

#include <bits/stdc++.h>

using namespace std;
int findMaxDiff(int arr[], int n)
    {
        int min=arr[0],max=INT_MIN,res;
        
      for(int i=1;i<n;i++){
            if(arr[i]==min)
            continue;
        
            if(arr[i]<min){
                min=arr[i];
            }else if(arr[i]>max){
                max=arr[i];
                res=max-min;
            }
      }
      return res;
    }
int main()
{   int arr[]={7, 9, 5, 6, 3, 2};
    cout<<findMaxDiff(arr,6);

    return 0;
}