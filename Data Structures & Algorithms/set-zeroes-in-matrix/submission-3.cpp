class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int toprow = 0,firstcol=0;
        int m = matrix.size(),n=matrix[0].size();
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0) {
                toprow=1;
            }
        }
        for(int j=0;j<m;j++){
            if(matrix[j][0]==0) {
                firstcol=1;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(toprow==1){
            for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
        }
        if(firstcol==1){
            for(int j=0;j<m;j++){
            matrix[j][0]=0;
        }
        }
    }
};
