//Count No of pythagorean triplets 

#include <iostream>

using namespace std;

int countTriplets(int n){
    int arr[n];
    for(int i=1;i<=n;i++)
        arr[i-1]=i*i;
    int a,b,c,sum,count=0;
    for(c=n-1;c>=2;c--){
        a=0;
        b=c-1;
        while(a<b){
            sum=arr[a]+arr[b];
            if(sum==arr[c]){
                count++;
                a++;
                b--;
            }else
            if(sum>arr[c])
                b--;
            else{
                a++;
            }
        }
    }
    return count;
}

int main()
{
    int N;
    cin>>N;
    int count=countTriplets(N);

    cout<<count;
    return 0;
}
