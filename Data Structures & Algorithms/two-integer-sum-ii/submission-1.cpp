class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < numbers.size(); i++) {
            int need = target - numbers[i];
            if (mpp.find(need) != mpp.end()) {
                return {mpp[need]+1, i+1};
            }
            mpp[numbers[i]] = i; 
        }
        return {};
    }
};
