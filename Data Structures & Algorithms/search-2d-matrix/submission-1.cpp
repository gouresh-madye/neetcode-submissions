class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0, column = matrix[0].size() - 1;
        while(row < matrix.size() && column >= 0){\
            if(target > matrix[row][column]) row++;
            else if(target < matrix[row][column]) column--;
            else return true;
        }
        return false;
    }
};
