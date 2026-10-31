class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<int,int>> row(9);        
        vector<unordered_map<int,int>> column(9);
        
        int start_row = 0;
        while(start_row<9){
            int start_col = 0;
            while(start_col<9){
                map<int,int> bmap;
                for(int i=start_row;i<start_row+3 && start_row+3<=9;i++){
                    for(int j=start_col;j<start_col+3 && start_col+3<=9;j++){
                        if(board[i][j]=='.') continue;
                        int val = board[i][j] - '1';
                        if(row[i][val] || column[j][val] || bmap[val]) return false;
                        else{
                            row[i][val] = 1;column[j][val] = 1; bmap[val] = 1;
                        }
                    }
                }
                start_col+=3;
            }
            start_row+=3;
        }
        return true;
    }
};
