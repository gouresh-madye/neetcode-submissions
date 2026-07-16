class Solution {
public:
    bool isAlpha(char c) {
        return isalnum(c);
    }

    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            while (left < right && !isAlpha(s[left]))
                left++;

            while (left < right && !isAlpha(s[right]))
                right--;

            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};