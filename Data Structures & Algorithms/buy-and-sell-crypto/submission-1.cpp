class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        for(int i = 0; i < prices.size() - 1; i++){
            for(int j = i + 1; j < prices.size(); j++){
                maxP = max(maxP, prices[j] - prices[i]);
            }
        }
        return maxP;
    }
};
