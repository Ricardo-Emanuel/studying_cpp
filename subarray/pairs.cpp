# include <iostream>
using namespace std;

void printPairs(int arr[], int size) {
    int first = 0;
    int second;

    while (first < size - 1) {
        for (second = first + 1; second < size; second++) {
            //cout << "(" << arr[first] << ", " << arr[second] << ")" << endl;
            cout << "(" << arr[first] << ", " << arr[second] << "), ";
        }
        first++;
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(int);

    printPairs(arr, size);
    return 0;
}