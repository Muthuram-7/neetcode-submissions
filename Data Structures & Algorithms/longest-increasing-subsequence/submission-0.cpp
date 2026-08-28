class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        int i,j;
        int ans=1;
        vector<int>dp(n,1);
        for(i=n-2;i>=0;i--)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[j]>nums[i])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
