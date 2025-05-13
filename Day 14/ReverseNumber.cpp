class Solution {
public:
    int reverse(int x) {
        long long sum = 0;
        while (x != 0) {
            int rem = x % 10;
            sum = sum * 10 + rem;
            x = x / 10;
        }

        // Check for overflow (32-bit signed integer range)
        if (sum > INT_MAX || sum < INT_MIN) {
            return 0;
        }

        return sum;
    }
};
// class Solution {
// public:
//     int reverse(int x) {
//         int result = 0;

//         while (x != 0) {
//             int digit = x % 10;
//             x /= 10;

//             // Check for overflow before it happens
//             if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) return 0;
//             if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) return 0;

//             result = result * 10 + digit;
//         }

//         return result;
//     }
// };
