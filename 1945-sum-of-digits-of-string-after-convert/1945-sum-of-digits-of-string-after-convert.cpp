class Solution {
public:
    int getLucky(string s, int k) {
        string temp="";
        int ans=0;
        
        for(int i=0;i<s.length();i++){
                temp+=to_string(int(s[i])-96);
            cout<<int(s[i])-96<<"as"<<endl;
            }
            cout<<temp<<endl;

        while(k>0){
             ans=0;
            for(int i=0;i<temp.length();i++){
                ans+=temp[i]-'0';
                cout<<ans<<endl;
            }
            k--;
            temp=to_string(ans);
           
        }
        return ans;
    }
};