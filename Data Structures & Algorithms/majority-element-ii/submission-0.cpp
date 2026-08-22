class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<int>v;
        for(auto x:mp)
        {
            if(x.second>n/3)
            {
                v.push_back(x.first);
            }
        }
        return v;
    }
};