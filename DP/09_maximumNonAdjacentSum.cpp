#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> nums, int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return nums[0];
    }
    int inc = solve(nums, n - 2) + nums[n];
    int exc = solve(nums, n - 1) + 0;
    return max(inc, exc);
}
int solvememoiazation(vector<int> nums, int n, vector<int> dp)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return nums[0];
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int inc = solve(nums, n - 2) + nums[n];
    int exc = solve(nums, n - 1) + 0;
    dp[n] = max(inc, exc);
    return dp[n];
}
int solvetabulation(vector<int> nums)
{
    int n = nums.size();
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    dp[1]=max(nums[1],nums[0]); 
    for (int i = 2; i < n; i++)
    {
        int inc = dp[i - 2] + nums[i];
        int exc = dp[i - 1] + 0;
        dp[i] = max(inc, exc);
    }
    return dp[n - 1];
}
int solveSpaceOptimization(vector<int>nums){
    int n=nums.size();
    int prev2=0;
    int prev1=nums[0];
    for(int i=1;i<n;i++){
        int inc=prev2+nums[i];
        int exc=prev1+0;
        int ans=max(inc,exc);
        prev2=prev1;
        prev1=ans;

    }
    return prev1;


}
int main()
{
    vector<int> nums;
    nums.push_back(9);
    nums.push_back(9);
    nums.push_back(8);
    nums.push_back(2);
    int n = nums.size();
    //vector<int> dp(n, -1);
    // int maxsum = solvememoiazation(nums, n - 1, dp);
    //int maxsum = solvetabulation(nums);
    int maxsum=solvetabulation(nums);
    cout << maxsum;
}