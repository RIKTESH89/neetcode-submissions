class Solution {
public:

    bool isvalid(int a, int b, int m, int n, vector<vector<int>>& matrix){
        if(a>m-1 || a<0 || b>n-1 || b<0 || matrix[a][b]==-101) return false;
        return true;
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int dir = 0;
        vector<int> dir_x = {0,1,0,-1};
        vector<int> dir_y = {1,0,-1,0};
        vector<int> ans; int i=0,j=0;
        int m = matrix.size(),n=matrix[0].size();
        while(true){
            ans.push_back(matrix[i][j]);
            matrix[i][j]=-101;
            if(isvalid(i+dir_x[dir],j+dir_y[dir],m,n, matrix)){
                i=i+dir_x[dir];
                j=j+dir_y[dir];
            }
            else{
                dir = (dir+1)%4;
                if(!isvalid(i+dir_x[dir],j+dir_y[dir],m,n, matrix)){
                    break;
                }
                i=i+dir_x[dir];
                j=j+dir_y[dir];
            }
        }
        return ans;
    }
};
