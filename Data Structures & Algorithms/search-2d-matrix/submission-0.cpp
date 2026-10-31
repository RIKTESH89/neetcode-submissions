class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = (int)matrix.size();
        int m = (int)matrix[0].size();

        int len = m*n;
        int l =0, r=len-1;
        while(l>=0 && r<len && l<=r){
            int mid = l+(r-l)/2;
            int row = mid/m;
            int col = mid%m;

            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] < target) {
                l = mid + 1;
            }
            else if(matrix[row][col] > target) {
                r = mid - 1;
            }
        }
        return false;
    }
};
