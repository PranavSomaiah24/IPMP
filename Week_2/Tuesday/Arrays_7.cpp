//Generate smallest pallindrome larger than given number

void generateUtil (int num[], int n )
{
    int mid = n/2;
    bool isLeftSmaller = false;
    int i = mid - 1;
    int j = (n % 2)? mid + 1 : mid;  

    while (i >= 0 && num[i] == num[j])
        i--,j++;
    
    if ( i < 0 || num[i] < num[j])
        isLeftSmaller = true;
    
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }
    
    if (isLeftSmaller == true)
    {
        int carry = 1;
        i = mid - 1;
 
        if (n%2 == 1)
        {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }
        else
            j = mid;
 
        while (i >= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--]; 
        }
    }
}

void generateNextPalindrome( int num[], int n )
{
    int i,isOnly9=1;
    for(int i=0;i<n;i++){
        if(num[i]!=9){
            isOnly9=0;
            break;
        }
    }
    if(isOnly9)
    {
        cout<< "1 "
        for( i = 1; i < n; i++ )
            cout<<"0 ";
        cout<<"1";
    }
    else
    {
        generateUtil( num, n );
    }
}