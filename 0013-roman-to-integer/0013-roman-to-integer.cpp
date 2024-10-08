class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        int h=2;
        m['I']  =          1;
        m['V']   =          5;
        m['X']=             10;
        m['L']=             50;
        m['C']=             100;
        m['D']=             500;
        m['M']=             1000;

        int ans=0;
        for(int i=0;i<s.length()-1;i++){
            if(m[s[i]]<m[s[i+1]]){
                ans+=(m[s[i+1]]-m[s[i]]);
                i++;
                if(i==s.length()-1){
                    h=1;
                }
                
            }
            else{
                ans+=m[s[i]];
                h=0;
            }
        }
        if(h!=1) ans+=m[s[s.length()-1]];
        return ans;
    }
};