class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int max_profit=0;
        int cur_max=0;
        for(int i=n-1;i>=0;i--)
        {
            cur_max=max(cur_max,prices[i]);
            max_profit=max(max_profit,cur_max-prices[i]);
        }
        return max_profit;
    }
};