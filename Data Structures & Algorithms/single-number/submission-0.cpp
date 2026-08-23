class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int i;
        int n=nums.size();
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[nums[i]]==1)
            {
                return nums[i];
            }
        }
    }
};
