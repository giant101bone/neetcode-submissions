class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        unordered_map<int , int> h ;
        for(int i = 0 ; i<n ;i++)
        {
            h[target-numbers[i]] = i ;
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(h.count(numbers[i]))
            {
                return { i+1 , h[numbers[i]]+1 };
            }
        }
        return {} ;
    }
};

// given array is sorted in non decreasing order 
// have to reach target in two sums ; 
// with o(1) how to do it 
