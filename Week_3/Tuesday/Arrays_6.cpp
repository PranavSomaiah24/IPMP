// Smalest positive number missing in unsorted array

class Solution{
    public:
    int findPos(int arr[],int n){
        for(int i=0;i<n;i++){
            if(abs(arr[i])-1<n && arr[abs(arr[i])-1]>0)
                arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        int i;
        for(i=0;i<n;i++){
            if(arr[i]>0)
                break;
        }
        return i+1;
    }
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) { 
        
        int i=0,j=i-1,temp;
        while(i<n){
            if(arr[i]<=0){
                j++;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            i++;
        }
        int size=n-(j+1);
        return findPos(arr+j+1,size);
    } 
};