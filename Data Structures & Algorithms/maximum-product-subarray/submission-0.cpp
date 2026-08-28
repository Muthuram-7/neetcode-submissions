class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int i;
        int minprod=nums[0];
        int maxprod=nums[0];
        int ans=nums[0];
        for(i=1;i<n;i++)
        {
            int curr=nums[i];
            if(curr<0)
            {
                swap(minprod,maxprod);
            }
            minprod=min(curr,curr*minprod);
            maxprod=max(curr,curr*maxprod);
            ans=max(ans,maxprod);
        }
        return ans;
    }
};
