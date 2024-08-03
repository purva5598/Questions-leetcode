class Solution {
public:
    bool checkValidString(string s) {
        int h=0,j=0;
        stack<char> st;
        for(int i=s.size()-1;i>=0;i--){
            
            if(s[i]==')') st.push(s[i]);
            else if(s[i]=='(' && (!st.empty()&&st.top()==')')) st.pop();
            else if(s[i]=='(' && h>0){
                st.push(s[i]);
                h--;
                j++;
            }
            else if(s[i]=='(' && h==0){
                return false;
            }
            else if(s[i]=='*') h++;
        }
        int g=0,k=0;
         stack<char> stt;
        for(int i=0;i<=s.size()-1;i++){
            
            if(s[i]=='(') stt.push(s[i]);
            else if(s[i]==')' && (!stt.empty()&&stt.top()=='(')) stt.pop();
            else if(s[i]==')' && g>0){
                stt.push(s[i]);
                g--;
                k++;
            }
            else if(s[i]==')' && g==0){
                return false;
            }
            else if(s[i]=='*') g++;
        }
        
        if(st.size()-j<=h && (stt.size()-k<=g)) return true;
         return false;
    }
};