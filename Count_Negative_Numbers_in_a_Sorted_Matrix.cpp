#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int count = 0;

    for (auto row : grid) {
        for (int x : row) {
            if (x < 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    cout << "Negative Numbers: " << countNegatives(grid);

    return 0;
}