//Segregate 0s and 1s in array

void binSort(int arr[], int N)
{
   //Your code here
   
   int i=0,j=-1,temp;
   
   while(i<N){
       if(arr[i]==0){
           j++;
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
       i++;
   }
   
   
   /**************
    * No need to print the array
    * ************/
}