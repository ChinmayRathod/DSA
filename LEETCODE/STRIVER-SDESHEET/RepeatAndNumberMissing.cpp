class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        vector<int> arr(2, 0);
        int sum = 0, n = nums.size(), dup = 0;
        set<int> mySet;
        for(int i = 0;i< n ; i++){
            sum += nums[i];
            if(mySet.count(nums[i]))    dup = nums[i];
            mySet.insert(nums[i]);
        }
        int ogSum = n*(n+1)/2;
        arr[0] = dup;
        arr[1] = ogSum + dup - sum;
        return arr;
    }
};