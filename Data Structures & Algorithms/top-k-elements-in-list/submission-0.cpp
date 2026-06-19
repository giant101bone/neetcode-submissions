class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int freq[2001] = {0} ;
        int offset = 1000 ;
        for(int i = 0 ; i < nums.size() ;i++)
        {
            freq[nums[i]+offset] += 1 ;
        }
        vector<int> max(k,0);
        for (int j = 0 ; j < k ; j++)
        {
            int ma = -1;
            int index = -1000 ;
            for(int i = 0 ; i < 2001 ; i++) 
            {
                if(ma<freq[i])
                {
                    ma = freq[i];
                    index = i ; 
                }
            }
            max[j] = index-offset ;
            freq[index] = 0 ;
            index = -1000 ;
            ma = -1 ;
            
        }
        return max ;

        
        
    }
};
