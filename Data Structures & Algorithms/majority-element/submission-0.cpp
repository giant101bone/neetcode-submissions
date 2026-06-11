class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> freq{} ;
        int nu = ((nums.size())/2) ;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            freq[nums[i]] += 1 ;
            if(freq[nums[i]]>nu)
            {
                return nums[i] ;
                break;
            }
        }
        
    }
};