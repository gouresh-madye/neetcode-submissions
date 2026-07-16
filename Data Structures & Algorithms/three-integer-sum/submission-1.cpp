class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      vector<vector<int>> result;

      for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0) break;
        if(i > 0 && nums[i] == nums[ i - 1 ]) continue;

        int left = i + 1, right = nums.size() - 1;
        while(left < right){
            int target = nums[left] + nums[right] + nums[i];
            if( target > 0 ){
                right--;
            } else if(target < 0){
                left++;
            } else{
                result.push_back({nums[left], nums[right], nums[i]});
                left++;
                right--;
                while( left < right && nums[left] == nums[left - 1]){
                    left++;
                }
            }
        }
      }
      return result;
    }
};