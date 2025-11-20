// https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zeroPtr = 0;
        for(int i = 0 ; i < n; i++){
            if(nums[i]==2){
                int temp = nums[n-1];
                nums[n-1] = nums[i];
                nums[i] = temp;
                n--;
                i--;
            }
            else if(nums[i] == 0){
                int temp = nums[zeroPtr];
                nums[zeroPtr] = nums[i];
                nums[i] = temp;
                zeroPtr++;
            }
        }
    }
};