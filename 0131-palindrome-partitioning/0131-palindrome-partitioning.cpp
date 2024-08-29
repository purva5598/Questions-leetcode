class Solution {
    
    void f(int idx, vector<vector<string>> &res, vector<string> &path,string s){
        if(idx==s.size()){
            res.push_back(path);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(ispali(s,idx,i)){
                path.push_back(s.substr(idx,i-idx+1));
                f(i+1,res,path,s);
                path.pop_back();
            }
        }
    }
    
    bool ispali(string s, int start, int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        f(0,res, path,s);
        return res;
    }
};