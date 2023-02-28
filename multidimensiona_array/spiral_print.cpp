# include <iostream>

using namespace std;

void spiralPrint(int arr[][10], int n, int m) {

    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    while (startCol <= endCol and startRow <= endRow) {

        for (int col = startCol; col <= endCol; col++) {
            cout << arr[startRow][col] << " ";
        }

        for (int row = startRow + 1; row <= endRow; row++) {
            cout << arr[row][endCol] << " ";
        }

        for (int col = endCol - 1; col >= startCol; col--) {
            if (startRow == endRow) { break; }
            cout << arr[endRow][col] << " ";
        }

        for (int row = endRow - 1; row >= startRow + 1; row--) {
            if (startCol == endCol) { break; }
            cout << arr[row][startCol] << " ";
        }

        startCol++;
        startRow++;
        endCol--;
        endRow--;
    }
}

int main() {

    int arr[][10] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    spiralPrint(arr, 5, 5);

    return 0;
}