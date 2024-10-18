class Solution {
public:
    string decimalToBase(int decimal, int base) {
   string converted;
    int remainder;
    while (decimal > 0) {
        remainder = decimal % base;
        converted = (char)(remainder + '0') + converted;
        decimal /= base;
    }
    return converted;
}
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
         string s=   decimalToBase(n,i);
            cout<<s<<endl;
            for(int i=0;i<s.size()/2;i++){
                if(s[i]!=s[s.size()-1-i]) return false;
            }
        }
        return true;
    }
};