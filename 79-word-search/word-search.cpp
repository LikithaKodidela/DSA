class Solution {
bool search(int i, int j, int rows, int cols, vector<vector<char>> &board, string &word,
int k)
{
    if(k == word.size()) return true;
    if(i < 0 || j < 0 || i >= rows || j >= cols || board[i][j] != word[k]) return false;

    char ch = board[i][j];
    board[i][j] = '#';  // mark visited

    bool found = search(i+1, j, rows, cols, board, word, k+1) ||
                 search(i-1, j, rows, cols, board, word, k+1) ||
                 search(i, j+1, rows, cols, board, word, k+1) ||
                 search(i, j-1, rows, cols, board, word, k+1);

    board[i][j] = ch; 
    return found;
}

public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(board[i][j] == word[0]) {
                     if(search(i, j, rows, cols, board, word, 0)) return true;
                     }
            }
        }
        return false;

    }
};