class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long i = 0; i * i <= c; i++) {       
            int remainder = c - i * i;
            int sqrt_rem = sqrt(remainder);
            if (sqrt_rem * sqrt_rem == remainder)
                return true;
        }
        return false;
    }
};
