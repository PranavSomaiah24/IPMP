//Merge sort

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1=m-l+1, n2=r-m;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[m+1+i];
    }
    int i=l, j=0,k=0;
    
    while(j<n1 && k<n2){
        if(a[j]<b[k]){
            arr[i]=a[j];
            j++;
            i++;
        }else{
            arr[i]=b[k];
            k++;
            i++;
        }
    }

    while(j<n1){
        arr[i]=a[j];
        i++;j++;
    }
    while(k<n2){
        arr[i]=b[k];
        i++;k++;
    }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
        return;
    
    int m=l+(r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
    }
};
