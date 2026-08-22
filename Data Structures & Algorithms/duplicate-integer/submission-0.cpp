class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>mp;
        int i;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int c=0;
        for(auto x:mp)
        {
            if(x.second>1)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};