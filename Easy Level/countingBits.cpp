/*
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
*/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> mem(n+1);
        mem[0] = 0;
        for(int i=0;i<=n;i++){
            mem[i] = mem[i/2] + i%2; // for odd -> right shift + 1 and for even only right shift
        }
        return mem;
    }
};