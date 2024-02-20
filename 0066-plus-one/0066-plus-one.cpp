class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         vector<int> ans;
//         long long int n1=0;
//         for(int i=0;i<digits.size();i++){
//             n1+=pow(10,i)*digits[digits.size()-1-i];
//         }
//         cout<<n1<<endl;
//         n1=n1+1;
//         cout<<n1<<endl;
//         vector<int> ans;
//         while(n1>0){
//             ans.push_back(n1%10);
//             cout<<n1%10<<endl;
//             n1=n1/10;
//             cout<<n1<<endl;
//         }
//         reverse(ans.begin(),ans.end());
        int carry=0,add=1,h=0;;
        for(int i=0;i<digits.size();i++){
            
            if(digits[digits.size()-1-i]+carry+add>9){
                ans.push_back((digits[digits.size()-1-i]+carry+add)%10);
                carry=1;
                add=0;
                h=1;
            }
            else{
                ans.push_back(digits[digits.size()-1-i]+carry+add);
                carry=0;
                add=0;
                h=0;
            }
        }
        if(h==1){
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};