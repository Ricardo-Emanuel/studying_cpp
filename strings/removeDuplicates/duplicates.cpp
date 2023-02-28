# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

bool linearSearch(const vector<char> word, char key) {

    for (unsigned int i = 0; i < word.size(); i++) {
        if (word[i] == key) { return true; }
    }
    return false;
}

string removeDuplicate(string word) {
    string newWord = "";
    vector<char> uniqueLetters = {};

    for (unsigned int i = 0; i < word.size(); i++) {
        if (linearSearch(uniqueLetters, word[i]) == false) { 
            uniqueLetters.push_back(word[i]);
            newWord.push_back(word[i]);
        }
    }
    sort(newWord.begin(), newWord.end());
    return newWord;
}

int main() {

    string word = "geeksforgeeks";
    cout << removeDuplicate(word) << endl;
    return 0;
}