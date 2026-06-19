class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq ;
        vector<int> major ;
        int cutoff = (nums.size())/3 ;
        for (int i = 0 ; i < nums.size() ;i++ )
        {
            freq[nums[i]] += 1 ;
        }
        for (auto x : freq)
        {
            if (x.second > cutoff)
            {
                major.push_back(x.first);
            }
        }
        return major ;

        
    }
};