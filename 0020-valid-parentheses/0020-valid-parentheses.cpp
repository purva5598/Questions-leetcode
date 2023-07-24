class Solution {
public:
    bool isValid(string s) {
        bool b=true;
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(!st.empty()&&(s[i]==')'&&st.top()=='(')){
                    st.pop();
                }
                else if(!st.empty()&&(s[i]==']'&&st.top()=='[')){
                    st.pop();
                }
                else if(!st.empty()&&(s[i]=='}'&&st.top()=='{')){
                    st.pop();
                }
                else{
                    b=false;
                    break;
                }
            }
        }
        if(!st.empty()){
            b=false;
        }
        return b;
    }
};