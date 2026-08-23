class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int>mp;
        int i;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto a,auto b)
        {
            return a.second>b.second;
        });
        vector<int>ans;
        for(i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
