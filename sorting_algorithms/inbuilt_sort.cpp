# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

/*
* std::sort() is a built-in function from <algorithm>
* The C++ standard does not specify which sorting algorithm
* should be used by std::sort()
* 
* It's worth noting that the performance of std::sort() can
* vary depending on the data being sorted and the hardware it's 
* running on. In some cases, other sorting algorithms such as 
* merge sort or radix sort may be more efficient for certain types 
* of data or on certain architectures. In such cases, it may be 
* necessary to implement a custom sorting function or use a different
* sorting algorithm altogether.
*/

bool compare(int a, int b) {
    return a > b;
}

int main() {

    vector<int> numbers = { -5,5,1,5,3,6,9,7,10 };
    
    // This is a way to sort in reverse order
    sort(numbers.begin(), numbers.end(), compare);

    for (auto x: numbers) {
        cout << x << " ";
    }
    return 0;
}