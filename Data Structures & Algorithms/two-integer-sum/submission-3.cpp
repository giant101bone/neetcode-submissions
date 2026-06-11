class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int , int > diff {} ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            diff[target-nums[i]] = i ;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(diff.count(nums[i])&& diff[nums[i]]!=i)
            {
                vector <int> n = {i,diff[nums[i]]};
                return n;
            }
        }

    }
};
