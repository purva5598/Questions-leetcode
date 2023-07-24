class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        int r=0;
        for(int i=0;i<4;i++){
            r=num%10;
            v.push_back(r);
            num=num-r;
            num=num/10;
            r=0;
        }
        sort(v.begin(),v.end());
        int num1=(v[0]*10)+v[2];
        int num2=(v[1]*10)+v[3];
        return num1+num2;
    }
};