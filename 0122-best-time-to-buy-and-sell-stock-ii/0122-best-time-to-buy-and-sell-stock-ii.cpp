class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int r = prices[prices.size()-1];
        
        for(int i=prices.size()-1;i>=0;i--){
            if(r>prices[i]){
                ans=ans+(r-prices[i]);
                r=prices[i];
            }
            else if(r<prices[i]){
                r=prices[i];
            }
        }
    return ans;
    }
};