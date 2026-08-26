class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        return max(solve(nums,0,n-2),solve(nums,1,n-1));
    }
    int solve(vector<int>&nums,int left,int right)
    {
        int len=right-left+1;
        vector<int>dp(len);
        dp[len-1]=nums[right];
        if(len==1)
        {
            return dp[0];
        }
        dp[len-2]=max(nums[right],nums[right-1]);
        for(int i=len-3;i>=0;i--)
        {
            dp[i]=max(nums[left+i]+dp[i+2],dp[i+1]);
        }
        return dp[0];
    }
};
