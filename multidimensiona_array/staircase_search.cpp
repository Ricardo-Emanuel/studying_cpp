# include <iostream>

using namespace std;

pair<int, int> staircaseSearch(int arr[][4], int m, int n, int key) {
    if (key < arr[0][0] || key > arr[m-1][n-1]) { return {-1,-1}; }

    int i = 0;
    int j = n-1;

    while ((i <= m-1) & (j >= 0)) {
        // To keep user friendly
        if (arr[i][j] == key) { return {i+1, j+1}; }
        else if (arr[i][j] > key) { j--; }
        else { i++; }
    }

    return {-1,-1};
}

int main () {

    int array[][4] {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int m = sizeof(array) / sizeof(array[0]);
    int n = sizeof(array[0]) / sizeof(array[0][0]);
    pair<int, int> coords = staircaseSearch(array, m, n, 35);

    cout << "(" << coords.first << ", " << coords.second << ")";

    return 0;
}