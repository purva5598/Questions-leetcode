class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
    int j=0, ans = 0;
        for(int i=g.size()-1 ; i>=0 ; i-- ){
            if(s.empty()) break;
            cout<<"asd"<<(s.size()-1-j );
            if( g[i] <= s[s.size()-1-j] ){
                ans++;
                if((s.size()-1-j)==0)break;
                j++;
            }
        }
        return ans;
    }
};