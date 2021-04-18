#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char arr[]="a1b2c3d4";
    int n=sizeof(arr);
    int maxShifts = n - 2;
    int shifts = 0;
    
    for (int i = 1; i < n / 2; i+= 2)
    {
        int j = i;
        int save;
        int tmp = arr[i];
    
        do{
            if (j & 1) //odd index element
                j = n / 2 + j / 2;
            else
                j = j / 2;
    
            save = arr[j];
            arr[j] = tmp;
            tmp = save;
        } while(j != i);
    }
    cout<<arr;
}
