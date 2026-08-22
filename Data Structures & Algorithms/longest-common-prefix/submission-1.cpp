class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(),strs.end());
        string first=strs.front();
        string end=strs.back();
        int minlength=max(first.size(),end.size());
        int i=0;
        while(i<minlength&&first[i]==end[i])
        {
            i++;
        }
        return first.substr(0,i);
    }
};