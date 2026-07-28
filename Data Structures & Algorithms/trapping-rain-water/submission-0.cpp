class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1, result = 0;
        int leftMax = height[left], rightMax = height[right];
        while(left < right){
            if(leftMax < rightMax){
                left++;
                leftMax = max(leftMax, height[left]);
                result += leftMax - height[left];
            }
            else{
                right--;
                rightMax = max(rightMax, height[right]);
                result += rightMax - height[right];
            }
        }
        return result;
    }
};
