class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[nums[i]]>n/2)
            {
                return nums[i];
            }
        }
    }
};