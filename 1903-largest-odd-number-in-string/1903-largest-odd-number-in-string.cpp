class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2==0){
                num.erase(i);
                // cout<<i<<endl;
            }
            else{
                break;
            }
        }
        // cout<<num<<endl;
        // int h=0;
        // for(int i=0;i<num.size();i++){
        //     if(num[i]!='a'){
        //         // cout<<i<<endl;
        //         ans=ans+num[i];
        //         h++;
        //     }
        // }
        return num;
    }
};