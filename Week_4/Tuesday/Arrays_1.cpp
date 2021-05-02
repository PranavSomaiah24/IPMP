// Find sum closest to zero

class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            if(n==1)
                return -1;
            if(n==2)
                return arr[0]+arr[1];
            sort(arr,arr+n);
            
            int l=0,r=n-1,min=INT_MAX,sum;;
            
            while(l<r){
                
                sum=arr[l]+arr[r];
                if((abs(sum)<abs(min)) || ((abs(sum)==abs(min)) && sum>min) ){
                    min=sum;
                }
                else if(sum<0){
                    l++;
                }else{
                    r--;
                }
            }
            return min;
        }
};