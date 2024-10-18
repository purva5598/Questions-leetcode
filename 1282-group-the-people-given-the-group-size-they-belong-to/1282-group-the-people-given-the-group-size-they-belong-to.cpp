class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int,set<int>> mp;
        
        for(int i=0;i<groupSizes.size();i++){
            if(mp.find(groupSizes[i])!=mp.end()){
                cout<<i<<"lk"<<endl;
                if(mp[groupSizes[i]].size()<groupSizes[i]){
                    mp[groupSizes[i]].insert(i);
                }else{
                    vector<int> temp;
                    for (auto k:mp[groupSizes[i]]){
                        temp.push_back(k);
                    }
                    ans.push_back(temp);
                    temp.empty();
                   mp.erase(groupSizes[i]);
                mp[groupSizes[i]].insert(i);
                }
                
                for (auto k:mp){
                     cout<<k.first<<"-> ";
                        for(auto i:k.second)
                        cout<< i<<" ";
                    }
                cout<<endl;
            }else{
                cout<<i<<"kl"<<endl;
                 mp.erase(groupSizes[i]);
                mp[groupSizes[i]].insert(i);
                 for (auto k:mp){
                     cout<<k.first<<"-> ";
                        for(auto i:k.second)
                        cout<< i<<" ";
                    }
                cout<<endl;
            }
        }
        cout<<"kkkkkkkkkkkkkkkkkkk"<<endl;
        for (auto k:mp){
                     cout<<k.first<<"-> ";
                        for(auto i:k.second)
                        cout<< i<<" ";
            cout<<endl;
                    }
                cout<<endl;
        
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        
        if(!mp.empty()){
             vector<int> temp;
                    for (auto k:mp){
                        for(auto i:k.second)
                        temp.push_back(i);
                        
                        for(int j=0;j<temp.size();j++){
                            cout<<temp[j]<<" ";
                        }
                        cout<<endl;
                    ans.push_back(temp);
                        temp.clear();
                         for(int j=0;j<temp.size();j++){
                            cout<<temp[j]<<" ";
                        }
                        cout<<endl;
                    }
        }
        return ans;
    }
};