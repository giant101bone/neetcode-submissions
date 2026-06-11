class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int freq[100001] = {0};
        int offet = 50000;
        for(int i = 0 ; i < nums.size();i++)
        {
            freq[nums[i]+offet] += 1 ;

        }
        int counter = 0 ;
        for(int j = 0 ; j <100001 ;j++)
        {
            if(freq[j] != 0){
            for(int i = 0 ; i<freq[j];i++)
            {
                nums[counter] = j-offet;
                counter++ ;
            }
            }
        }
        return nums ;
    }
};