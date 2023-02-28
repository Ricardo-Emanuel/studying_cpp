# include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else {
            if (arr[mid] > key) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int binarySearchRec(int arr[], int start, int end, int key) {
    if (start >= end) { return -1; }
    else {
        int mid = (start + end) / 2;
        if (arr[mid] == key) { return mid; }
        else {
            if (arr[mid] > key) { end = mid - 1; }
            else { start = mid + 1; }

            return binarySearchRec(arr, start, end, key);
        }
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int key;

    cin >> key;

    int index = binarySearchRec(arr, start, size, key);

    if (index > -1) {
        cout << "Element " << key << " is at index " << index << endl;
    }
    else {
        cout << "Element " << key << " NOT found!" << endl;
    }
    
    return 0;
    
}