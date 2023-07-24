class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int > v;
        for(int i=0;i<prices.size();i++){
            st.push(prices[i]);
            int cnt=0;
            for(int j=i+1;j<prices.size();j++){
            if(st.top()>=prices[j]){
                v.push_back(st.top()-prices[j]);
                cnt=1;
                break;
                
            }
            }
            if(cnt==0){
                v.push_back(st.top());
            }
        }
        return v;
    }

};