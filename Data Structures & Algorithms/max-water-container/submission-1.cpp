class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int left = 0, right = heights.size() - 1;
        while(left < right){
            int minHeight = min(heights[left], heights[right]);
            maxArea = max(maxArea, minHeight * (right - left));
            if(minHeight == heights[left]) left++;
            else right--;
        }
        return maxArea;
    }
};
