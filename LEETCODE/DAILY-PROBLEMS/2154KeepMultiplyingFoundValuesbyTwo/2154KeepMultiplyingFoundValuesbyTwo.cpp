//https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == original){
                original = 2*original;
                i = -1;
            }
        }
        return original;
    }
};
