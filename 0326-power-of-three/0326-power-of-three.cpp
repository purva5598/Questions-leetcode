class Solution {
public:
    bool f(int &n, long long int num){
        if(num==n) return true;
        if(num>n) return false;
       return f(n,num*3);
    }
    
    bool isPowerOfThree(int n) {
        long long int num=1;
       
        return  f(n, num);
    }
};