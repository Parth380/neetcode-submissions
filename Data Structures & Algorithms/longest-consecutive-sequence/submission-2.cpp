class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int x : s) {
            // Start counting only at the beginning of a sequence
            if (s.find(x - 1) == s.end()) {
                int current = x;
                int count = 1;

                while (s.find(current + 1) != s.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};