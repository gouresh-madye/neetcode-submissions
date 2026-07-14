class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> st;

        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];

            if (st.find(difference) != st.end()) {
                return {st[difference], i};
            }

            st[nums[i]] = i;
        }

        return {};
    }
};