# include <iostream>
# include <vector>

using namespace std;

/*
* Insertion Sort is based on the loop invariant of 
* always and every all steps will be a subsequence
* of the vector or the array which is sorted
* in this case it will be the first i elements of 
* the array or vector.
*/

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > current) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
}

void insertionSortVector(vector<int>& numbers) {
    for (unsigned int i = 1; i < numbers.size(); i++) {
        int current = numbers[i];
        int prev = i - 1;

        while (prev >= 0 && numbers[prev] > current) {
            numbers[prev + 1] = numbers[prev];
            prev--;
        }
        numbers[prev + 1] = current;
    }
}

int main() {
    int array[] = {-5,5,2,-1,0,5,4,3,2,1};
    int size = sizeof(array) / sizeof(int);

    vector<int> numbers = {-5,5,2,-1,0,5,4,3,2,1};
    insertionSortVector(numbers);
    insertionSort(array, size);

    for (auto x: array) {
        cout << x << " ";
    }
    cout << endl;

    for (auto x: numbers) {
        cout << x << " ";
    }

    return 0;
}