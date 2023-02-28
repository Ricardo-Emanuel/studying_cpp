# include <iostream>

using namespace std;

string vowel(string word) {

    string newWord = "";

    for (unsigned int i = 0; i < word.size(); i++) {
        switch (word[i]) {
            case 97:
            case 101:
            case 105:
            case 111:
            case 117:
                newWord.push_back(word[i]);
                break;
        }
    }

    return newWord;
}

int main() {

    string word = "adciaiovoiandooad";
    cout << vowel(word) << endl;
    return 0;
}