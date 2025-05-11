class Solution {
public:
    int countOdds(int low, int high) {
        // if(low%2==high%2) return (high-low)/2;
        // return Math
        return (high - low) / 2 + (low % 2 != 0 || high % 2 != 0 ? 1 : 0);
    }
};