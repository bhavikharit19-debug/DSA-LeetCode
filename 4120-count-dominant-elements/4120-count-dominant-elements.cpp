class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;

        int dominant = 0;
        if(nums[0] >= nums[1]) dominant++;

        for(int i = 1; i < n-1; i++) {
            double avrg = (nums[i-1] + nums[i+1]) / 2.0;
            if(nums[i] >= avrg) {
                dominant++;
            }
        }

        if(nums[n-1] >= nums[n-2]) dominant++;

        return dominant;
    }
};