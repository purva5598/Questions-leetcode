class Solution {
public:
    bool isPalindrome(string s) {
         string a="";
        for(int i=0;i<s.length();i++){
            if(int(s[i])<=90 && int(s[i])>=65){
                s[i]=tolower(s[i]);
                a+=s[i];
            }
            else if(int(s[i])<=122 && int(s[i])>=97 || (int(s[i])<=57 && int(s[i])>=48)){
                a+=s[i];
            }
        }
      
        
        string temp="";
        for(int i=a.length()-1;i>=0;i--){
            temp+=a[i];
        }
        for(int i=0;i<a.length();i++){
            cout<<a[i];
            cout<<temp[i];
        }
        
        if(a==temp) return true;
        else return false;
    }
};