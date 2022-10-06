class Solution {
public:
    
    void solve(int col, vector<vector<string>> &ans, vector<string> &board, vector<int> &rowCheck, vector<int> &upperDiagCheck, vector<int> &lowerDiagCheck, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row<n; row++){
            if(rowCheck[row]==0 && upperDiagCheck[n-1+(col-row)]==0 && lowerDiagCheck[row+col]== 0){
                board[row][col] = 'Q';
                rowCheck[row] = 1;
                upperDiagCheck[n-1+(col-row)] = 1;
                lowerDiagCheck[row+col] = 1;
                solve(col+1,ans, board,rowCheck, upperDiagCheck, lowerDiagCheck, n);
                board[row][col] = '.';
                rowCheck[row] = 0;
                upperDiagCheck[n-1+(col-row)] = 0;
                lowerDiagCheck[row+col] = 0;
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i<n ; i++){
            board[i] = s;
        }
        vector<int> rowCheck(n, 0), upperDiagCheck(2*n-1,0), lowerDiagCheck(2*n-1,0);
        solve(0, ans , board, rowCheck, upperDiagCheck, lowerDiagCheck, n);
        return ans;
    }
};