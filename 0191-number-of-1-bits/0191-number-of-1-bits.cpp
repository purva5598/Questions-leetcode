class Solution {
public:
    int f(int n, int cnt){
        if(n==0) return cnt;
        if(n%2==1){
            cnt++;
        }
        return f(n/2,cnt);
        
    }
    
    int hammingWeight(int n) {
        
        return f(n,0);
    }
};