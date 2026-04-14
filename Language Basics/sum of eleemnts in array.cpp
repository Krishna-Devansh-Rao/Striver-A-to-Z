// Sum of first last element in array

// Given an integer array nums, return the sum of the 1st and last element of the array.


class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        int n = nums.size();
        return nums[0] + nums[n-1];
    }
};