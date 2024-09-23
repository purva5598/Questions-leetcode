class Solution {
public:
//     int minExtraChar(string s, vector<string>& dictionary) {
//         set<string> st;
//         for(int i=0;i<dictionary.size();i++){
//             st.insert(dictionary[i]);
//         }
//         for(auto i:st){
//             cout<<i<<endl;
//         }
//         unordered_map<int,int>m ;
        
//         string temp="";
//         for(int i=0;i<s.size();i++){
//                 for(int j=i;j<s.size();j++){
//                     temp+=s[j];
//                     if(st.find(temp)!=st.end()){
//                         for(int k=i;k<=j;k++){
//                             m[k]++;
//                         }
//                     }
//                 }
//             temp="";
//         }
        
//         return s.size()-m.size();
    int solve(string& s, unordered_map<string, int>&mp, vector<int>&dp, int index)
    {
        if (index >= s.size()) return 0;
        if (dp[index] != -1) return dp[index];
        
        string currStr = "";
        int minExtra = s.size();
        for (int cutIdx = index; cutIdx < s.size(); cutIdx++)
        {
            currStr.push_back(s[cutIdx]);
        
            int currExtra = (mp.count(currStr))? 0 : currStr.size();
            int nextExtra = solve(s, mp, dp, cutIdx + 1);
            int totalExtra = currExtra + nextExtra;
            
            minExtra = min(minExtra, totalExtra);
        }
        return dp[index] = minExtra;
    }
    int minExtraChar(string s, vector<string>& dictionary) 
    {
        vector<int>dp(s.size(), -1);
        unordered_map<string, int>mp;
        for (string& word : dictionary) mp[word]++;
        
        int ans = solve(s, mp, dp, 0);
        return ans;
    }
};