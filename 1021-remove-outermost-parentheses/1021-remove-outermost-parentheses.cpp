class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int h=0;
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && h==0){
                h=1;
            }
            else if(h==1){
                if(s[i]=='('){ st.push(s[i]); ans.push_back(s[i]); }
                else if(s[i]==')' &&(!st.empty()&& st.top()=='(')){ st.pop(); ans.push_back(s[i]);}
                else h=0;
            }
        }
        return ans;
        
    }
};