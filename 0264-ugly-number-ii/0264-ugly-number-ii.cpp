class Solution {
public:
    int nthUglyNumber(int n) {
        int un1 = 1;
        int un2 = 1;
        int un3 = 1;
        vector<int> arr(n + 1);
        arr[1] = 1;
        for (int i = 2; i <= n; i++) {
            int a = arr[un1] * 2;
            int b = arr[un2] * 3;
            int c = arr[un3] * 5;
            
            cout<<a<<" "<<b<<" "<<c<<"vals"<<endl;  
            cout<<un1<<" "<<un2<<" "<<un3<<"cnts"<<endl;
            
            int findnextugly = min({a, b, c});
            arr[i] = findnextugly;
            cout<<arr[i]<<endl;
            if (findnextugly == a)
                un1++;
            if (findnextugly == b)
                un2++;
            if (findnextugly == c)
                un3++;
        }
        return arr[n];
    }
};
//1 = 000
// 2 = pow(1,0,0)
//3 = pow(0,1,0)
//4= pow(2,0,0)
//5 = pow(0 ,0 ,1);
//6 = pow( 1, 1, 0)
//7= pow( 3, 0 ,0)
//8 = pow( 0,2, 0)
// 9= pow(1, 0 ,1);
//10= pow(2, 1, 0) = num 12
//11= pow(0, 1, 1);