# include <iostream>

using namespace std;

int main() {

    char numbers[][10] = {
        "one",
        "two",
        "three",
        "four"
    };

    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}