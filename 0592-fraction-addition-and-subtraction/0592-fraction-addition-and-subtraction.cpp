class Solution {
public:
    string fractionAddition(string e) {
        int num = 0, den = 1;
        int i = 0;

        while (i < e.size()) {
            int sign = 1;
            if (e[i] == '+' || e[i] == '-') {
                if (e[i] == '-') sign = -1;
                i++;
            }

            int n = 0;
            while (i < e.size() && isdigit(e[i])) {
                n = n * 10 + (e[i] - '0');
                i++;
            }
            n *= sign;

            i++;

            int d = 0;
            while (i < e.size() && isdigit(e[i])) {
                d = d * 10 + (e[i] - '0');
                i++;
            }

            num = num * d + n * den;
            den *= d;

            int gcdVal = gcd(abs(num), den);
            num /= gcdVal;
            den /= gcdVal;
        }

        return to_string(num) + "/" + to_string(den);
        
    }
};