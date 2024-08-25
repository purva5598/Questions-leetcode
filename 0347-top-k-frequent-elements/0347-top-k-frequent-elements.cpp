class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto i:m){
            cout<<i.second<<" "<<i.first<<endl;
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());        
        int j=v.size()-1;
        vector<int> ans;
        while(k>0){
            ans.push_back(v[j].second); j--; k--;
        }
        return ans;
    }
};