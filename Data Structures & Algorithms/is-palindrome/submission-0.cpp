class Solution {
public:
    bool isPalindrome(string s) 
    {
        for(char &ch:s)
        {
            ch=tolower(ch);
        }
        vector<char>v;
        for(char &ch:s)
        {
            if((ch>='a'&&ch<='z')||ch>='0'&&ch<='9')
            {
                v.push_back(ch);
            }
        }
        vector<char>v1=v;
        reverse(v.begin(),v.end());
        if(v==v1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
