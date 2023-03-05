# include <iostream>
# include <vector>
# include <algorithm>


using namespace std;

int pairSticks(vector<int> length, int D)
{
    int result = 0;
    int left = 0;
    unsigned int right = 1;
    sort(length.begin(), length.end());
    
    while (right < length.size()) {
        if (length[right] - length[left] <= D) {
            result++;
            left += 2;
            right += 2;
        } else {
            left++;
            right++;
        }
    }
    return result;
}

int main() {

    vector<int> numbers = {1,4,5,6,7,8,9};
    int target = 2;

    cout << pairSticks(numbers, target) << endl;

    return 0;
}