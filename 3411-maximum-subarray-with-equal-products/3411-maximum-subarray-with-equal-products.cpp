class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxlenght = 0;
        for(int i = 0; i < n; i++) {
            long long prod = 1;
            long long currGcd = nums[i];
            long long currLcm = nums[i];
            for(int j = i; j < n; j++) {
                prod *= nums[j];
                if(prod > 25200) break;
                currGcd = gcd(currGcd, (long long)nums[j]);
                currLcm = lcm(currLcm, (long long)nums[j]);

                if(prod == currGcd * currLcm) {
                    maxlenght = max(maxlenght, j - i + 1);
                }
            }
        }

        return maxlenght;
    }
};