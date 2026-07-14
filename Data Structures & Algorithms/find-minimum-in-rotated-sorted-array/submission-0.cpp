class Solution {
public:
    int findMin(vector<int> &nums) {
        int mini = nums[0];
        int n = nums.size();
        for(int i = 0;i < n;i++){
            mini = min(mini,nums[i]);
        }
        return mini;
    }
};
