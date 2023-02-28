# include <iostream>
# include <unordered_map>

using namespace std;

bool arePermutation(string A, string B) {

    char currentLetter;
    unordered_map<char, int> letterMap;
    for (unsigned int i = 0; i < A.size(); i++) {

        currentLetter = A[i];
        if (letterMap.count(currentLetter)) {
            letterMap[currentLetter]++;
        }
        else {
            letterMap[currentLetter] = 1;
        }
    }

    for (unsigned int i = 0; i < B.size(); i++) {

        currentLetter = B[i];
        if (letterMap.count(currentLetter)) {
            letterMap[currentLetter]--;
            if (letterMap[currentLetter] < 0) {
                return false;
            }
        }
        else {
           return false;
        }
    }
    return true;
}

int main() {

    string word1 = "cdegimnostu";
    string word2 = "codingmutes";
    cout << arePermutation(word1, word2);

    return 0;
}