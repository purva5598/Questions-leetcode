#include <bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        int h=0;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                temp=temp+s[i];
                h=1;
            }
            else if(h==1&&s[i]==' '&&!temp.empty()){
                reverse(temp.begin(),temp.end());
                ans=ans+temp+" ";
                temp="";
                h=0;
            }
            if(!temp.empty()&&i==0){
                reverse(temp.begin(),temp.end());
                ans=ans+temp;
                temp="";
                h=0;
            }
        }
        if (ans[ans.size()-1]==' ') ans.pop_back();
        return ans;
    }
};