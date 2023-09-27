class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        set<int> s;
        int ans=0;
    
        for(int i=0;i<prices.size();i++){
             if(buy>prices[i]){
                 buy=prices[i];
             }
            else{
                s.insert(prices[i]-buy);
            }
        }
        ans=*max_element(s.begin(),s.end());
        
        return ans;
        
    }
};