# include <iostream>
using namespace std;

void printArray(int arr[], int n) {

    cout << "In Function " << sizeof(*arr) << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

int main() {

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    cout << "In Main " << sizeof(arr) << endl;
    printArray(arr, n);

    return 0;
}