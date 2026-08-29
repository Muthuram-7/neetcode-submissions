class Solution {
public:
    int numSquares(int n) 
    {
        int i,j;
        vector<int>dp(n+1,n);
        dp[0]=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j*j<=i;j++)
            {
                int sq=j*j;
                dp[i]=min(dp[i],dp[i-sq]+1);
            }
        }
        return dp[n];
    }
};