class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        int count=0;
        while(n>1){
            if(n%3==0)
                n=n/3;
            else
                n=n-1;
            count++;
        }
            
        return count;
    }
};