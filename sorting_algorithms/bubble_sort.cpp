# include <iostream>
using namespace std;

/*
* Traverse the entire array changing the elements
* in order to put the biggest element on the end
* of the array or vector.
* So this literally works based on bubbling the
* biggest elements to the end of the data structure
* until it finish.
*/

void bubbleSort(int arr[], int size) {

    // O(N^2)

    /*
    We use the outer loop to control the number
    of times which we will select a number to analyze
    */
    for (int i = 0; i < size - 1; i++) {

        /*
        The inner loop is the one analyze the elements
        itself, that's why it analyzes
        */
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void bubbleSortOptimized(int arr[], int size) {

    bool swapped;
    
    /* 
    Best case:
    Time complexity: O(N)

    Worts case:
    Time complexity: O(N^2)
    */
    for (int i = 0; i < size - 1; i++) {
        swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = sizeof(arr) / sizeof(int);

    bubbleSortOptimized(arr, size);
    bubbleSort(arr, size);

    /*for (auto x : arr) {
        cout << x << ", ";
    }*/

    return 0;
}