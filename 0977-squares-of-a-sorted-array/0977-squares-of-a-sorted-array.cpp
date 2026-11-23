class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> sqrs;
        for(int i = 0; i < n; i++) {
            sqrs.push_back(nums[i] * nums[i]);
        }

        sort(sqrs.begin(), sqrs.end());

        return sqrs;
    }
};