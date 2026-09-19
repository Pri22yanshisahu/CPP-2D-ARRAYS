#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> luckyNumbers(vector<vector<int>>& matrix) {
    vector<int> result;

    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        int minValue = *min_element(matrix[i].begin(), matrix[i].end());

        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == minValue) {
                bool largest = true;

                for (int k = 0; k < rows; k++) {
                    if (matrix[k][j] > matrix[i][j]) {
                        largest = false;
                        break;
                    }
                }

                if (largest) {
                    result.push_back(matrix[i][j]);
                }
            }
        }
    }

    return result;
}

int main() {
    vector<vector<int>> matrix = {
        {3, 7, 8},
        {9, 11, 13},
        {15, 16, 17}
    };

    vector<int> result = luckyNumbers(matrix);

    cout << "Lucky Numbers: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}