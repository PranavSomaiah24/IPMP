// Max area of hsitogram using stacks

int getMaxArea(int arr[], int n)
{
    stack<int> s;
    
    s.push(-1);
    int area = arr[0];
    int i = 0;
    vector<int> leftS(n,-1), rightS(n,n);
    while(i<n){
        while(!s.empty()&&s.top()!=-1&&arr[s.top()]>arr[i]){
            rightS[s.top()] = i;
            s.pop();
        }
        if(i>0&&arr[i]==arr[i-1]){
            leftS[i] = leftS[i-1];
        }else{
            leftS[i] = s.top();
        } 
        s.push(i);
        i++;
    }
    for(int j = 0; j<n; j++){
        area = max(area, arr[j]*(rightS[j]-leftS[j]-1));
    }
    return area;
}
 