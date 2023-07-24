class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> s1;
        stack<char> s2;
        bool ans=true;
        for(int i=0;i<s.size();i++){
            if(s1.empty()){
                if(s[i]=='#'){
                    continue;
                }
                else{
                    s1.push(s[i]);
                }
            }
            else if(s[i]=='#'){
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
         for(int i=0;i<t.size();i++){
            if(s2.empty()){
                if(t[i]=='#'){
                    continue;
                }
                else{
                    s2.push(t[i]);
                }
            }
            else if(t[i]=='#'){
                s2.pop();
            }
            else{
                s2.push(t[i]);
            }
        }
        if(s1.size()!=s2.size()){
            ans=false;
        }
        else{
            while(!s1.empty()){
                if(s1.top()!=s2.top()){
                    ans=false;
                    break;
                }
                s1.pop();
                s2.pop();
            }
        }
        return ans;
    }
};