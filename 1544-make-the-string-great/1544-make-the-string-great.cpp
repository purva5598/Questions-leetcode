class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
         string ans="";
        if(s.size()!=0){
        for(int i=0;i<s.size();i++){
            
            if(st.empty()){

            st.push(s[i]);
            }
            else if((st.top()==toupper(s[i])&&(s[i]!=st.top()))||(st.top()==tolower(s[i])&&(s[i]!=st.top()))){
                st.pop();
            }

         else if((s[i]==toupper(s[i+1])&&(s[i]!=s[i+1]))||(s[i]==tolower(s[i+1])&&(s[i]!=s[i+1]))){

                i++;
            }
            else{
                st.push(s[i]);
            }
           
        }
       
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        }
        return ans;
        
    }
};