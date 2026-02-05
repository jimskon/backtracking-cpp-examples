
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isSafe(const vector<int>& board, int row, int col) {
    for (int r = 0; r < row; r++) {
        int c = board[r];
        if (c == col || abs(c - col) == row - r)
            return false;
    }
    return true;
}

void backtrack(int row, int n, vector<int>& board) {
    if (row == n) {
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                cout << (board[r] == c ? "Q " : ". ");
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (!isSafe(board, row, col)) continue;

        // CHOOSE
        board[row] = col;

        // EXPLORE
        backtrack(row + 1, n, board);

        // UNDO
        board[row] = -1;
    }
}

int main() {
    int n = 4;
    vector<int> board(n, -1);

    backtrack(0, n, board);
}
