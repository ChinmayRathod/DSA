// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], maxSumPrev = nums[0];
        for( int i = 1; i< nums.size() ; i++){
            maxSumPrev = max(maxSumPrev + nums[i], nums[i]);
            maxSum = max(maxSum, maxSumPrev);
        }
        return maxSum;
    }
};