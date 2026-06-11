class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector <int> ANS(2*(nums.size()),0);
        for (int i = 0 ; i < (nums.size()) ; i++)
        {
            ANS[i] = nums[i] ;
            ANS[i+(nums.size())] = nums[i] ;
        }
        return ANS ;
    }
};