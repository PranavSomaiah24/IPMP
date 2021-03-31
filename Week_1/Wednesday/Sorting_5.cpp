//QuickSort

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int l, int h)
    {
        if(l>=h)
            return;
        
        int i=partition(arr,l,h);
        quickSort(arr,l,i-1);
        quickSort(arr,i+1,h);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int p=arr[high],temp;
        
        int i=low,j=i-1;
        
        while(i<high){
            if(arr[i]<p){
                j++;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            ++i;
        }
        j++;
        temp=p;
        arr[high]=arr[j];
        arr[j]=temp;
        return j;
    }
};