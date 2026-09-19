#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();

    if (m * n != r * c) {
        return mat;
    }

    vector<vector<int>> result(r, vector<int>(c));
    int index = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[index / c][index % c] = mat[i][j];
            index++;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2},
        {3, 4}
    };

    int r = 1;
    int c = 4;

    vector<vector<int>> result = matrixReshape(mat, r, c);

    for (auto row : result) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}