// Segregate even and odd elements

void rearrangeEvenAndOdd(int arr[], int n)
{
    
    int j = -1,temp;
    for (int i = 0; i < n; i++) {
        
        if (arr[i] % 2 == 0) {           
            j++;
            temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
        }
    }
}