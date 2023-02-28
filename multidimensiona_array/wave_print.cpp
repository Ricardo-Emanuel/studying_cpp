# include <iostream>
# include <vector>

using namespace std;

void printVector(vector<int> arr) {
    for (unsigned int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> wavePrint(vector<vector<int>> arr, int m, int n) {

    vector<int> newArr = {};

    int endRow = m - 1;
    int col = n - 1;

    while (col >= 0) {
        for (int i = 0; i <= endRow; i++) {
           newArr.push_back(arr[i][col]);
        }

        if(--col < 0) { break; };

        for (int i = endRow; i >= 0; i--) {
            newArr.push_back(arr[i][col]); 
        }
        col--;
    }

    return newArr;
}

int main() {

    // Demonstrating that this is a vector of vectors
    vector<vector<int>> arr = {
        {1,2,3,4,5,100},
        {6,7,8,9,10,200},
        {11,12,13,14,15,300},
        {16,17,18,19,20,400}
    };

    printVector(wavePrint(arr, 4, 6));

    return 0;
}