# include <iostream>

using namespace std;

bool palindromeDetector(char word[], int size) {
    int first = 0;
    int second = size - 2;

    while (first < second) {
        if (word[first] != word[second]) {
            return false;
        }
        first++;
        second--;
    }
    return true;
}

bool isPalindrome(string str)
{
    // your code goes here
    int first = 0;
    int second = str.size() - 1;
    cout << second << endl;

    while (first < second) {
        if (str[first] != str[second]) return false;
        
        first++;
        second--;
    }
    return true;
}

int main() {

    string word = {"Ricardo"};

    cout << isPalindrome(word) << endl;

    return 0;
}