class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0], tot = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>buy) tot += prices[i] - buy;
            buy = prices[i];
        }
        return tot;
    }
};