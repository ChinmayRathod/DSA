// Flloyds Cycle - Detection

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Detect the cycle using slow & fast pointers
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Find the entry point of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow; // duplicate number
    }
};