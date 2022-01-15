/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.


*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int front = 0;
        int temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
            {
                temp = nums[i];
                nums[i] = nums[front];
                nums[front] = temp;
                front++;
            }
        }
        return nums;
    }
};