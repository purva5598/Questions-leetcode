class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
    for(int i=0;i<edges.size();i++){
        for(int j=0;j<edges[i].size();j++){
            cout<<edges[i][j]<<" ";
        }
        cout<<endl;
    }
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        int cnt=0;
        int ans;
    for(auto i: mp){
        for(auto j: i.second){
           cnt++;
        }
        if(cnt>1){
            ans=i.first;
            break;
        }else cnt=0;
    }
     
        return ans;
    }
};