# include <iostream>
# include <vector>
using namespace std;

void selectionSort(vector<int>& numbers) {
    /*
    * This sorting algorithm is also based in
    * keeping the loop invariant of a subvector
    * sorted while we select another elements
    * from the rest of the vector, but in this case
    * we keep track of the smallest elements and
    * put the others elements on its place 
    */
    for (unsigned int position = 0; position < numbers.size()-1; position++) {
        unsigned int min_position = position;
        for (unsigned int i = position; i < numbers.size(); i++) {
            if (numbers[i] < numbers[min_position]) min_position = i;
        }
        swap(numbers[min_position], numbers[position]);
    }
}

int main() {
    vector<int> numbers = {-5,5,2,-1,0,5,4,3,2,1};
    selectionSort(numbers);

    for (auto x: numbers) {
        cout << x << " ";
    }

    return 0;
}