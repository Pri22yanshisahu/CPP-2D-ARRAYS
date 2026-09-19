#include <iostream>
#include <vector>
using namespace std;

int numSpecial(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 1) {
                int rowCount = 0;
                int colCount = 0;

                for (int k = 0; k < cols; k++) {
                    rowCount += mat[i][k];
                }

                for (int k = 0; k < rows; k++) {
                    colCount += mat[k][j];
                }

                if (rowCount == 1 && colCount == 1) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0},
        {0, 0, 1},
        {1, 0, 0}
    };

    cout << "Special Positions: " << numSpecial(mat);

    return 0;
}