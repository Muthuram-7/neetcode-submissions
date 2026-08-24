class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        stack<string>st;
        int i;
        int n=operations.size();
        for(i=0;i<n;i++)
        {
            if(operations[i]=="+")
            {
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.push(s1);
                int n1=stoi(s1);
                int n2=stoi(s2);
                int n3=n1+n2;
                string s3=to_string(n3);
                st.push(s3);
            }
            else
            {
                if(operations[i]=="C")
                {
                    st.pop();
                }
                else
                {
                    if(operations[i]=="D")
                    {
                        string s1=st.top();
                        int n1=2*stoi(s1);
                        string s2=to_string(n1);
                        st.push(s2);
                    }
                    else
                    {
                        st.push(operations[i]);
                    }
                }
            }
        }
        int sum=0;
        while(!st.empty())
        {
            string s1=st.top();
            sum+=stoi(s1);
            st.pop();
        }
        return sum;
    }
};