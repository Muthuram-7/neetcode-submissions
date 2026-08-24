class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=nums[i];
        }
        nums.clear();
        k=k%n;
        reverse(a,a+n);
        reverse(a,a+k);
        reverse(a+k,a+n);
        for(i=0;i<n;i++)
        {
            nums.push_back(a[i]);
        }    
    }
};