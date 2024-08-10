class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n =start ^ goal;
        int cnt=0;
        string s="";
        while (n > 0) {
        s = to_string(n % 2) + s; // Prepend the remainder (0 or 1)
        n = n / 2;
    }
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        return cnt;
    }
};