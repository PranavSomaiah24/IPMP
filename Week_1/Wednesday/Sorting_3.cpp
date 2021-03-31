//Insertion Sort

void insert(int arr[], int i)
    {
        
        int j=i-1,temp,index;
        temp=arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int i=1;i<n;i++){
            
            insert(arr,i);
        }
    }