class Solution {
public:
     bool f(double i,int n){
        if(pow(4,i)==n) return true;
         else if(pow(4,i)>n) return false;
         return f(i+1,n);
        
    }
    bool isPowerOfFour(int n) {
        return f(0,n);
    }
};