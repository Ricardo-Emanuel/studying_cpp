#include <iostream>
#include <vector>

using namespace std;

int compress(vector<char>& chars) {
    int counter = 1, index = 1;
    char current = chars[0];
    
    for (unsigned int i = 1; i <= chars.size(); i++) {
        if (chars[i] == current) { counter++; }
        else {
            if (counter > 1) {
                string str = to_string(counter);
                for (unsigned int j = 0; j < str.size(); j++) { chars[index++] = str[j]; }
            }
            chars[index++] = chars[i];
            counter = 1;
            current = chars[i];
        
        }
    }
    return index - 1;
}



int main() {
    vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'd', 'e'};
    
    int newLength = compress(chars);
    
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << endl;
    
    return 0;
}