class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // Row Check
        for(int row=0;row<9;row++){
            unordered_set<char>seen;
            for(int i=0;i<9;i++){
                if(board[row][i]=='.'){
                    continue;
                }
                if(seen.count(board[row][i])){
                    return false;
                }
                seen.insert(board[row][i]);
            }
        }

        //col Check
        for(int col=0;col<9;col++){
            unordered_set<char>seen;
            for(int i=0;i<9;i++){
                if(board[i][col]=='.'){
                    continue;
                }
                if(seen.count(board[i][col])){
                    return false;
                }
                seen.insert(board[i][col]);
            }
        }

        //grid check
        for(int i=0;i<9;i++){
            unordered_set<char>seen;
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int row=(i/3)*3+j;
                    int col=(i%3)*3+k;
                    if(board[row][col]=='.'){
                        continue;
                    }
                    if(seen.count(board[row][col])){
                        return false;
                    }
                    seen.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};
