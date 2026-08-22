class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int max=nums[n-1];
        int i=1;
        while(i<max)
        {
            int c=count(nums.begin(),nums.end(),i);
            if(c==0)
            {
                return i;
            }
            i++;
        }
    }
};