class Solution {
public:
    bool rotateString(string s, string goal) {
        int ans =false;
        if(s.length()!=goal.length()) return false;
        if(s==goal) return true;
        else{
            for(int i=0;i<s.length();i++){
                char a=s[0];
                for(int j=0;j<s.length()-1;j++){
                    s[j]=s[j+1];
                }
                s[s.length()-1]=a;
                if(s==goal){
                    ans=true;
                    break;
                }
            }
        }
        return ans;
    }
};