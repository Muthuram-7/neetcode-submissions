class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        int i=1;
        if(digits[n-1]!=9)
        {
            digits[n-1]++;
        }
        else
        {
            while((digits[n-i]==9)&&(i<n))
            {
                digits[n-i]=0;
                i++;
            }
            if(i<n)
            {
                digits[n-i]++;
                return digits;
            }
            else
            {
                if(digits[0]==9)
                {
                    digits[0]=0;
                    digits.insert(digits.begin(),1);
                }
                else
                {
                    digits[0]++;
                }
            }    
        }
        return digits;
    }
};
