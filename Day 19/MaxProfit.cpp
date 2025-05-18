class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minval=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minval=min(minval,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minval);
        }
        return maxprofit;
    }
};