/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    vector<int> sumarr;
    int tot_sum = 0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        tot_sum = tot_sum + nums[i];
        sumarr.push_back(tot_sum);
    }
    return sumarr;
}
int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> sums = runningSum(nums);
    for(int i=0; i<sums.size(); i++){
        cout<<sums[i]<< " ";
    }
    cout<<"\n";
    return 0;
}