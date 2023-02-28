# include <iostream>
using namespace std;

// Time complexity: O(N)
// Space complexity: O(1)
int kadaneAlgo(int arr[], int size) {

    // O(1)
    int temp_sum = 0;
    // O(1)
    int largest_sum = 0;
    // O(N)
    for (int i = 0; i < size; i++) {
        temp_sum += arr[i];
        if (temp_sum < 0) {
            temp_sum = 0;
        }
        largest_sum = max(largest_sum, temp_sum);
    }
    // O(1)
    return largest_sum;
}

// Time complexity: O(N^2)
// Space complexity: O(N)
int prefixSum(int arr[], int size) {

    // O(1)
    int prefix[100] = {0};
    // O(1)
    prefix[0] = arr[0];
    // O(N)
    for (int i = 1; i < size; i++) {
        prefix[i] = prefix[i-1] + arr[i]; 
    }
    // O(1)
    int largest_sum = 0;
    // O(N^2)
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            int temp_sum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j];
            largest_sum = max(largest_sum, temp_sum);
        }
    }
    // O(1)
    return largest_sum;
}

// Time complexity: O(N^3)
// Space complexity: O(1)
int largestSumBrute(int arr[], int size) {

    // O(1)
    int temp_sum;
    // O(1)
    int largest_sum = 0;
    // O(N^3)
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            temp_sum = 0;
            for (int k = i; k <= j; k++) {
                temp_sum += arr[k];
            }
            largest_sum = max(largest_sum, temp_sum);
        }
    }
    // O(1)
    return largest_sum;
}

int main() {
    int arr_0[] = {1,2,3,4,5,6,7,8,9};
    int size_0 = sizeof(arr_0) / sizeof(int);

    int arr_1[] = {-2,3,4,-1,5,-12,6,1,3};
    int size_1 = sizeof(arr_1) / sizeof(int);

    int arr_2[] = {2,3,-1,9,8,-10,7,2};
    int size_2 = sizeof(arr_2) / sizeof(int);

    cout << prefixSum(arr_0, size_0) << endl;
    cout << prefixSum(arr_1, size_1) << endl;
    cout << prefixSum(arr_2, size_2) << endl;

    cout << kadaneAlgo(arr_0, size_0) << endl;
    cout << kadaneAlgo(arr_1, size_1) << endl;
    cout << kadaneAlgo(arr_2, size_2) << endl;

    return 0;
}