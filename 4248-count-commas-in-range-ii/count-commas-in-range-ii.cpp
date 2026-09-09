class Solution {
public:
    long long countCommas(long long n) {
        long long p=1000, count=0;
        while(p<=n)
        {
            count+=n-p+1;
            p*=1000;
        }
        return count;
    }
};