# include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    // int temp;
    int first = 0;
    int second = size - 1;

    for (int i = 0; i < size / 2; i++) {
        swap(arr[first], arr[second]);
        first++;
        second--;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10, 11};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}