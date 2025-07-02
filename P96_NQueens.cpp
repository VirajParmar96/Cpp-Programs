/*
  Program: N-Queens Problem
  Level  : Advanced
  Author : Viraj Parmar
  Description:
    A backtracking program to solve the N-Queens problem.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(const vector<vector<int>>& board, int row, int col, int N) {
    for (int i = 0; i < col; ++i)
        if (board[row][i])
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
        if (board[i][j])
            return false;

    for (int i = row, j = col; i < N && j >= 0; ++i, --j)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQueens(vector<vector<int>>& board, int col, int N) {
    if (col == N)
        return true;

    for (int i = 0; i < N; ++i) {
        if (isSafe(board, i, col, N)) {
            board[i][col] = 1;
            if (solveNQueens(board, col + 1, N))
                return true;
            board[i][col] = 0; // Backtrack
        }
    }
    return false;
}

void printBoard(const vector<vector<int>>& board, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << (board[i][j] ? "Q " : ". ");
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter number of queens (N): ";
    cin >> N;

    vector<vector<int>> board(N, vector<int>(N, 0));

    if (solveNQueens(board, 0, N))
        printBoard(board, N);
    else
        cout << "No solution exists for N = " << N << endl;

    return 0;
}





// Output:
// . Q . .
// . . . Q
// Q . . .
// . . Q .
