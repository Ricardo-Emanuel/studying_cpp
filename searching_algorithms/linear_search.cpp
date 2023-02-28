# include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);

    int key;

    cin >> key;

    int index = linearSearch(arr, size, key);

    if (index > -1) {
        cout << "Element " << key << " is in index " << linearSearch(arr, size, key) << endl;
    }
    else {
        cout << "The array does not contain element " << key << endl;
    }

    
}