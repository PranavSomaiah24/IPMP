void printLeaders(int arr[], int size)
{
    int rightMax =  arr[size-1];
    cout << rightMax << " ";
     
    for (int i = size-2; i >= 0; i--)
    {
        if (rightMax <= arr[i])
        {          
            rightMax = arr[i];
            cout << rightMax << " ";
        }
    }   
}