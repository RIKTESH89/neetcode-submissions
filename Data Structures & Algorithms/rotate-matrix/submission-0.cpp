class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n/2;i++){
            for(int j=i;j<n-i-1;j++){
                int temp = matrix[i][j], x = i, y=j;
                for(int l=0;l<4;l++){
                    int x_a = y;
                    int y_a = n-1-x;
                    swap(temp,matrix[x_a][y_a]);
                    x=x_a;y=y_a;
                }
            }
        }
    }
};
