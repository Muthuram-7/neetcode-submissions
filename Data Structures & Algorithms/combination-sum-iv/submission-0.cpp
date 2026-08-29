class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) 
    {
        vector<int>dp(target+1,0);
        int i;
        dp[0]=1;
        for(i=1;i<=target;i++)
        {
            for(int num:nums)
            {
                if(i>=num)
                {
                    dp[i]+=dp[i-num];
                }
            }
        }
        return dp[target];
    }
};