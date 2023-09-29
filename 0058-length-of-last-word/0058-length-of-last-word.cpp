class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        int h=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && i==s.length()-1){
                h=1;
               
            }
            
            if(s[i]!=' '){
                h=0;
                cnt++;
            }
            if(s[i]==' ' && h==0){
                break;
            }
            
        }
        return cnt;
    }
};