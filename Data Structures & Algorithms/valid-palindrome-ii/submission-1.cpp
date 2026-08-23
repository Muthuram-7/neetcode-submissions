class Solution {
public:
    bool validPalindrome(string s) 
    {
        int i;
        int n=s.length();
        for(i=0;i<n;i++)
        {
            string s1=s;
            s1.erase(i,1);
            string s2=s1;
            reverse(s1.begin(),s1.end());
            if(s1==s2)
            {
                return true;
            }
        }
        return false;
    }
};