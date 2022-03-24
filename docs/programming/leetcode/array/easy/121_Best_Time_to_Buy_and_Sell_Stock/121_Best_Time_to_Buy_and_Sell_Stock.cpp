class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> buyDay;
        int maxPro=0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>prices[i-1] && buyDay.size()==0){
                buyDay.push_back(prices[i-1]);
            }
            if(buyDay.size() && buyDay[0]>prices[i]){
                buyDay[0]=prices[i];
            }
            if(buyDay.size() && prices[i]-buyDay[0]>maxPro){
                maxPro = prices[i]-buyDay[0];
            }                
        }
        return maxPro;
    }
};
