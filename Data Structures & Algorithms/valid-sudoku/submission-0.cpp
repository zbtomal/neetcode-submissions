class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            map<char, bool> row;
            for (int j = 0; j < 9; j++) {
                char x = board[i][j];
                if (x != '.' && row[x]) return false;
                row[x] = true;
            }
        }

        for (int i = 0; i < 9; i++) {
            map<char, bool> col;
            for (int j = 0; j < 9; j++) {
                char x = board[j][i];
                if (x != '.' && col[x]) return false;
                col[x] = true;
            }
        }

        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                map<char, bool> box;
                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {
                        char x = board[i][j];
                        if (x != '.' && box[x]) return false;
                        box[x] = true;
                    }
                }
            }
        }
        return true;
    }
};