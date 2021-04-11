// K sorted array using heap

#include <bits/stdc++.h>
using namespace std;


void kSorted(int arr[],int N,int k){
    
   int index=0;
    priority_queue<int, vector<int>, greater<int> > pq(arr, arr + k + 1);
    for(int i=k+1;i<N;i++){
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        arr[index++]=pq.top();
        pq.pop();
    }
}



int main() {
	int T,N,K,x;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>N;
	    cin>>K;
	    int arr[N];
	    for(int j=0;j<N;j++){
	        cin>>x;
	        arr[j]=x;
	    }
	    kSorted(arr,N,K);
	    for(int k=0;k<N;k++){
	        cout<<arr[k]<<' ';
	    }
	    cout<<'\n';
	}
	return 0;
}