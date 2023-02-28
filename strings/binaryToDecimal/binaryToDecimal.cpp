# include <iostream>
# include <string>
# include <cmath>

using namespace std;

int binaryToDecimal(string word) {

    int sum = 0;
    int power = 0;

    // I use word.size() and subtract in the if statement
    // Because I have to check until i comes to zero
    // Because it is an unsigned int
    for (unsigned int i = word.size(); i > 0; i--) {
        if (word[i-1] == '1') {
            sum += pow(2, power);
        }
        power++;
    }
    return sum;
}

int main() {

    string word = "1111111111111111111";
    cout << binaryToDecimal(word) << endl;

    return 0;
}