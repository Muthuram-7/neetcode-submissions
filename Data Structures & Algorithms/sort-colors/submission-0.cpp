class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n=nums.size();
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            cout<<nums[i];
        }
    }
};