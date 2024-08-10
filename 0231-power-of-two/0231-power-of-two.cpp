class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        bool ans=false;
        long long int i=0;
        
       while(pow(2,i)<n){
           cout<<pow(2,i)<<endl;
          i++;
       }
        if(pow(2,i)==n) ans=true;
        return ans;
    }
};