class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int arr[n];
        int i;
        for(i=0;i<n;i++)
        {
            arr[i]=nums[i];
        }
        nums.clear();
        k=k%n;
        reverse(arr,arr+n);
        reverse(arr,arr+k);
        reverse(arr+k,arr+n);
        for(i=0;i<n;i++)
        {
            nums.push_back(arr[i]);
        }    
    }
};