class Solution {
public:
    vector<int> sortColors(vector<int>& nums) {
        int freq[3] = {0};
        for(int i = 0 ; i < nums.size();i++)
        {
            freq[nums[i]] += 1 ;

        }
        int counter = 0 ;
        for(int j = 0 ; j <3 ;j++)
        {
            if(freq[j] != 0){
            for(int i = 0 ; i<freq[j];i++)
            {
                nums[counter] = j;
                counter++ ;
            }
            }
        }
        return nums ;
    }
};