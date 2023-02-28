# include <iostream>
# include <cstring>

using namespace std;

int main() {

    char word[1000];
    char largestString[1000] = {};

    int N;
    cin >> N;

    cout << "Now type " << N << " words, please." << endl;

    for (int i = 0; i <= N; i++) {
        cin.getline(word, 1000);

        if (strlen(word) > strlen(largestString)) {
            strcpy(largestString, word);
        }
    }

    cout << "This is the largest string: " << largestString << endl;

    return 0;
}