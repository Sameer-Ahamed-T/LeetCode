class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            bool visited[256] = {false};
            int currLen = 0;

            for (int j = i; j < s.length(); j++) {
                if (visited[s[j]]) {
                    break;
                }
                visited[s[j]] = true;
                currLen++;
            }
            maxLen = max(maxLen, currLen);
        }
        return maxLen;
    }
};