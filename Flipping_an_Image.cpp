#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for (auto& row : image) {
        int left = 0;
        int right = row.size() - 1;

        while (left <= right) {
            swap(row[left], row[right]);

            row[left] = 1 - row[left];

            if (left != right) {
                row[right] = 1 - row[right];
            }

            left++;
            right--;
        }
    }

    return image;
}

int main() {
    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    vector<vector<int>> result = flipAndInvertImage(image);

    for (auto row : result) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}