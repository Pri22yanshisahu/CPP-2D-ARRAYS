#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int projectionArea(vector<vector<int>>& grid) {
    int n = grid.size();
    int area = 0;

    for (int i = 0; i < n; i++) {
        int rowMax = 0;

        for (int j = 0; j < n; j++) {
            if (grid[i][j] > 0) {
                area++;
            }

            rowMax = max(rowMax, grid[i][j]);
        }

        area += rowMax;
    }

    for (int j = 0; j < n; j++) {
        int colMax = 0;

        for (int i = 0; i < n; i++) {
            colMax = max(colMax, grid[i][j]);
        }

        area += colMax;
    }

    return area;
}

int main() {
    vector<vector<int>> grid = {
        {1, 2},
        {3, 4}
    };

    cout << "Projection Area: " << projectionArea(grid);

    return 0;
}