// Sort 0s 1s and 2s

void sort012(int arr[], int n)
{
    int j=-1,k=n,i=0,temp;
    while(i<k){
        
        if(arr[i]==0){
            j++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }else
        if(arr[i]==2){
            k--;
            temp=arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
            i--;
        }
        i++;
    }
}