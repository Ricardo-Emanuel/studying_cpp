# include <iostream>
# include <vector>
using namespace std;

int main() {

    // vector<int> arr = {1,2,3,4,5,6,7,8,9};

    // Fill Constructor
    /* Initialize a vector with 10 elements
       In which all elements is equal to 7 */
    vector<int> arr(10, 7);

    arr.pop_back();
    arr.push_back(16);

    for (unsigned int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    return 0;
}