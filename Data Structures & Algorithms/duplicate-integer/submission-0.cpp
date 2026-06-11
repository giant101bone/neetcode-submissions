class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::map <int , int> freq {} ;
        bool state = 0 ; 
        for(int i = 0 ;  i <nums.size() ; i++ )
        {
            freq[nums[i]] += 1 ;
            if (freq[nums[i]]>1)
            {
                state = 1 ;
                break;
            }
        }
        return state ;
        
    }
};