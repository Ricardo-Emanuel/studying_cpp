# include <iostream>
using namespace std;

void printAllSubarrays(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            for (int k = i; k <= j; k++) {
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(int);

    printAllSubarrays(arr, size);

    return 0;
}