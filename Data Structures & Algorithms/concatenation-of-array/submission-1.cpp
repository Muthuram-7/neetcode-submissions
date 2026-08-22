class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n=nums.size();
        int i;
        vector<int>ans(2*n);
        for(i=0;i<n;i++)
        {
            ans[i]=nums[i];
        }
        for(i=0;i<n;i++)
        {
            ans[i+n]=nums[i];
        }
        return ans;
    }
};