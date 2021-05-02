int maxLen(int arr[], int n)
{
    unordered_map<int, int> map;
 
    int sum = 0,maxLen = 0,ending_index = -1;
 
    for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == 0) ? -1 : 1;
 
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0) {
            maxLen = i + 1;
            ending_index = i;
        }
        if (map.find(sum) != map.end()) {
            if (maxLen < i - map[sum]) {
                maxLen = i - map[sum];
                ending_index = i;
            }
        }
        else 
            map[sum] = i;
    }
    return maxLen;
}