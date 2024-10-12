class Solution {
public:
    string addBinary(string a, string b) {
      int carry=0;
        int b1,b2;
        string minlen="";
        string maxlen="";
        if(a.size()<b.size()){
            minlen=a;
            maxlen=b;
        }else{
            minlen=b;
            maxlen=a;
        }
        cout<<minlen<<" "<<maxlen<<endl;
        reverse(minlen.begin(),minlen.end());
cout<<""<<minlen<<endl;
        int diff=maxlen.size()-minlen.size();
        for(int i=0;i<diff;i++){
            cout<<"l"<<endl;
            minlen+='0';
        }
        cout<<""<<minlen<<endl;
        reverse(minlen.begin(),minlen.end());
    
        string ans="";
        for(int i=maxlen.size()-1;i>=0;i--){
            int t=carry +(minlen[i]-'0')+(maxlen[i]-'0');
            cout<<t<<endl;
            if(t==1){
                carry=0;
                ans+='1';
            }else if(t==2){
                ans+='0';
                carry=1;
            }else if(t==0){
                ans+='0';
                carry=0;
            }else{
                carry=1;
                ans+='1';
            }
        }
        if(carry==1){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};