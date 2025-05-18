class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> seen;
        for (int num : nums) {
            if (seen[num] >= 1)
                return true;
            seen[num]++;
        }
        return false;
    }
};