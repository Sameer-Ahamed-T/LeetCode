class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<int> ones;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                ones.push_back(i);
        }
        if(ones.size()<k)
            return "";
        string ans="";
        int min=INT_MAX;
        for(int i=0;i+k-1<ones.size();i++)
        {
            int left=ones[i];
            int right=ones[i+k-1];
            int len=right-left+1;
            string c=s.substr(left, len);
            if(len<min)
            {
                min=len;
                ans=c;
            }
            else if(min==len&&c<ans)
                ans=c;
        }
        return ans;
    }
};