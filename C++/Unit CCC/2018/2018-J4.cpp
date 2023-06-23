#include "..\..\common.h"


int N;

bool check(vector<vector<int>>& grid) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i > 0 && grid[i][j] < grid[i - 1][j]) || (j > 0 && grid[i][j] < grid[i][j - 1])) {
                return false;
            }
        }
    }
    return true;
}

void rotateGrid(vector<vector<int>>& grid) {
    vector<vector<int>> rotated(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            rotated[j][N - 1 - i] = grid[i][j];
        }
    }
    grid = rotated;
}

void printGrid(const vector<vector<int>>& grid) {
    for (const auto& row : grid) {
        for (int val : row) {
            cout << val << ' ';
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter grid size: ";
    cin >> N;
    vector<vector<int>> grid(N, vector<int>(N));
    cout << "Enter grid items (rows separated by spaces, columns seperated by newlines): \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        if (check(grid)) {
            cout << endl << "Rotated grid: \n";
            printGrid(grid);
            break;
        }
        rotateGrid(grid);
    }

    return 0;
}