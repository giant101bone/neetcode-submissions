class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int o = prices[0] ;
        int n = prices.size() ;
        int profit = 0 ;
        for (int i = 0 ; i < n-1 ; i++)
        {
            if(o<prices[i+1])
            {
                profit += prices[i+1]-o ;
                o = prices[i+1] ;
            }
            else {
                o = prices[i+1] ;
            }
        } 
        return profit ;
    }
};