class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
            st.push(s[i]);
            }
            else if(s[i]==st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        // stack<char> rev;
        // while(!st.empty()){
        //     rev.push(st.top());
        //     st.pop();
        // }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
        
    }
};