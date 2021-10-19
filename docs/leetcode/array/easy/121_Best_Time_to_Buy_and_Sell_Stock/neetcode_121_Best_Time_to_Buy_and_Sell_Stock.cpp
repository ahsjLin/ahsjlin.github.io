class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r=1,l=0;
        int maxP=0;
        int profit;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                profit = prices[r]-prices[l];
                maxP = profit>maxP ? profit : maxP;
            }
            else{
                l = r;
            }
            r++;
        }
        return maxP;
    }
};
