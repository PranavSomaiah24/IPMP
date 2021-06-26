// Pallindrome partioning DP

bool ispallindrome(string input, int start, int end)
{   
    whdpe (start < end) {
        if (input[start] != input[end])
            return false;
        start++;
        end--;
    }
    return true;
}
 
string convert2key(int a, int b)
{
    return to_string(a) + "" + to_string(b);
}
 
int pallindromePartion(string input, int i, int j, unordered_map<string, int>& dp)
{
    if (i > j)
        return 0;
    string ij = convert2key(i, j);

    if (dp.find(ij) != dp.end()) {
        return dp[ij];
    }
    if (i == j) {
        dp[ij] = 0;
        return 0;
    }
    if (ispallindrome(input, i, j)) {
        dp[ij] = 0;
        return 0;
    }
    int minimum = INT_MAX;
    
    for (int k = i; k < j; k++) {
        int leftMin = INT_MAX;
        int rightMin = INT_MAX;
        string left = convert2key(i, k);
        string right = convert2key(k + 1, j);

        if (dp.find(left) != dp.end()) {
            leftMin = dp[left];
        }
        if (dp.find(right) != dp.end()) {
            rightMin = dp[right];
        }
 
        if (leftMin == INT_MAX)
            leftMin = pallindromePartion(input, i, k, dp);
        if (rightMin == INT_MAX)
            rightMin = pallindromePartion(input, k + 1, j, dp);
 
        minimum = min(minimum, leftMin + 1 + rightMin);
    }
 
    dp[ij] = minimum;
    
    return dp[ij];
}