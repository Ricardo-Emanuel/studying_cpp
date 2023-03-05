# include <iostream>
# include <vector>

using namespace std;

/*
* This sorting algorithm creates a vector
* in which it literally count the frequency of 
* each number in the array or vector and then
* modifies the array or vector with this information.
*/

void countingSort(vector<int>& numbers) {
    int largest = -1;
    for (unsigned int i = 0; i < numbers.size(); i++) {
        largest = max(largest, numbers[i]);
    }

    vector<int> freq(largest+1, 0);

    for (int x: numbers) {
        freq[x]++;
    }

    int j = 0;
    for (int i = 0; i <= largest; i++) {
        while (freq[i] > 0) {
            numbers[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main() {
    vector<int> numbers = {1,89,1,2,3,4,5,6,2,3};
    countingSort(numbers);
    for (auto x: numbers) {
        cout << x << " ";
    }

    return 0;
}