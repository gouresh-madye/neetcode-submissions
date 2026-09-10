class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;

        // Store all numbers
        for (int num : nums) {
            mp[num] = 1;
        }

        int answer = 0;

        for (int num : nums) {
            // Start only if 'num' is the beginning of a sequence
            if (mp.find(num - 1) == mp.end()) {
                int current = num;
                int count = 1;

                while (mp.find(current + 1) != mp.end()) {
                    current++;
                    count++;
                }

                answer = max(answer, count);
            }
        }

        return answer;
    }
};