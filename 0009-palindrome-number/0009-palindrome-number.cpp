class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        if(x<0){
            s+='-';
        }
        while(x!=0){
            s+=(x%10)-'0';
            x/=10;
        }
        int i=0;int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++; j--;
        }
        return true;
    }
};