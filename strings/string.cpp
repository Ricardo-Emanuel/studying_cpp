# include <iostream>
# include <string>

using namespace std;

int main() {

    string s;
    s = "Hello, Strings!";
    // s("Hello, Strings!");
    // In that case it will read the line
    // Untill a dot show up
    // getline(cin, s, '.');

    // Iterate over a string
    for (char ch: s) {
        cout << ch << ", ";
    }

    cout << s << endl;
}