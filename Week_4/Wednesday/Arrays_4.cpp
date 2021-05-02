int maxSubarrayProduct(int arr[], int n)
{  
    int currMax = 1;
    int currMin = 1;
    int Max = 0;
    int flag = 0;
   
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            currMax = currMax * arr[i];
            currMin
                = min(currMin * arr[i], 1);
            flag = 1;
        }
        else if (arr[i] == 0) {
            currMax = 1;
            currMin = 1;
        }
        else {
            int temp = currMax;
            currMax=max(currMin * arr[i], 1);
            currMin=temp*arr[i];
        }

        if (Max < currMax)
            Max = currMax;
    }

    if (flag == 0 && Max == 0)
        return 0;

    return Max;
}