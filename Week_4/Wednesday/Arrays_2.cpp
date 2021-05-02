#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	    int N,D;
	    cin>>N;
	    cin>>D;
	    int arr[N],temp[D];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
       
       for(int i=0;i<D;i++){
           temp[i]=arr[i];
       }
        int k=0;
        for(int i=D;i<N;i++){
            arr[k++]=arr[i];
        }
        k=N-1;
        for(int i=D-1;i>=0;i--){
            arr[k--]=temp[i];
        }
        
        for(int i=0;i<N;i++){
            cout<<arr[i]<<' ';
        }
        
        cout<<endl;
	}
	return 0;
}