#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total = rows * cols;

    k = k % total;

    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < total; i++) {
        int newIndex = (i + k) % total;

        result[newIndex / cols][newIndex % cols] =
            grid[i / cols][i % cols];
    }

    return result;
}

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int k = 1;

    vector<vector<int>> result = shiftGrid(grid, k);

    for (auto row : result) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}