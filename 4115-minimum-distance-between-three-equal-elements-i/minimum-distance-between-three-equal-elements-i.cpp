class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int mn = -1;
        for(int i = 0; i < n; i++)
        {
            for(int left = i + 1; left < n; left++)
            {
                for(int right = left + 1; right < n; right++)
                {
                    if(nums[i] == nums[left] && nums[left] == nums[right])
                    {
                        int m = abs(i - left) + abs(left - right) + abs(right - i);
                        if(mn == -1 || m < mn)
                        {
                            mn = m;
                        }
                    }
                }
            }
        }
        return mn;
    }
};