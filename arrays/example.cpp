# include <iostream>
using namespace std;

int main() {
    int marks[10];

    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Input
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    // Output
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << marks[i];
        }
        else {
            cout << marks[i] << ", ";
        }
    }

    cout << endl;

    return 0;
}