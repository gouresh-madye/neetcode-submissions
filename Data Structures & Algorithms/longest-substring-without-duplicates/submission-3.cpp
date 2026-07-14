#include <set>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;

        unordered_map<char, int> lastSeen; // stores last index of character
        int left = 0, maxLen = 0;

        for(int right = 0; right < s.size(); right++) {
            char c = s[right];
            
            // If character was seen and is inside the current window
            if(lastSeen.find(c) != lastSeen.end() && lastSeen[c] >= left) {
                left = lastSeen[c] + 1; // shrink window
            }

            lastSeen[c] = right; // update last seen index
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
