class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<int,int> mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        vector<int> s;
        for(auto i:mp){
            s.push_back(i.second);
        }
        
        sort(s.begin(),s.end());
        if(s.size()==1) return true;
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
        int diff=0; int idx;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                if(i==0 && (i+1!=s.size()-1 ||s[i]==1)){  diff=1; s[i]-=1; break;}
                else{  diff=1; s[i+1]-=1; break;}
            }
        }
        
if(diff==0 &&s[0]!=1) return false;
         for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<s.size()-1;i++){
            cout<<diff<<" "<<s[i]<<" "<<s[i+1]<<endl;
            if(s[i]!=s[i+1] && s[i]!=0) return false;
        }
        
        return true;
   }
};