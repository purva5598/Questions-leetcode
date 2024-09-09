class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(n==1) return true;
         if(source==destination) return true;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i< edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n, 0);
        queue<int> q;
        q.push(source);
        vis[source] = 1;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            for (auto nbr : mp[node]) {
                if (!vis[nbr]) {
                    if (nbr == destination) return true;
                    vis[nbr] = 1;
                    q.push(nbr);
                }
            }
        }
        
        
        return false;
    }
};