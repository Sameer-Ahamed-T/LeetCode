class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        for(char c:s)
        {
            if(c=='(')
                st.push(c);
            else
            {
                if(!st.empty() && st.top()=='(')
                    st.pop();
                else
                    st.push(c);
            }
        }
        int count=0;
        while(!st.empty())
        {
            count++;
            st.pop();
        }
        return count;
    }
};