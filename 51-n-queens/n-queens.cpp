class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        vector<bool> col(n, false), diag1(2*n, false), diag2(2*n, false);

        function<void(int)> backtrack = [&](int row) {
            if (row == n) {
                result.push_back(board);
                return;
            }

            for (int c = 0; c < n; c++) {
                if (col[c] || diag1[row + c] || diag2[row - c + n])
                    continue;

                board[row][c] = 'Q';
                col[c] = diag1[row + c] = diag2[row - c + n] = true;

                backtrack(row + 1);

                board[row][c] = '.';
                col[c] = diag1[row + c] = diag2[row - c + n] = false;
            }
        };

        backtrack(0);
        return result;
    }
};
