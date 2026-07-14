class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> bracketPairs = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };
        stack<char> st;
        for (char c : s) {
            if (bracketPairs.count(c)) {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if (bracketPairs[top] != c) return false;
            }
        }
        return st.empty();
    }
};
