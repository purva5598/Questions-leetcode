class Solution {
    void dfs(int node, vector<int> &vis, unordered_map<int,vector<int>> &mp){
        vis[node]=1;
        for(auto nbr: mp[node]){
            if(vis[nbr]!=1){
                dfs(nbr,vis,mp);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(isConnected[i][j]==1){
                    mp[i].push_back(j);
                    mp[j].push_back(i);
                }
            }
        }
        
        vector<int> vis(isConnected.size(),0);
        int cnt=0;
        
        for(int i=0;i<isConnected.size();i++){
            if(vis[i]!=1){
                cnt++;
                dfs(i,vis,mp);
            }
        }
        return cnt;
    }
};