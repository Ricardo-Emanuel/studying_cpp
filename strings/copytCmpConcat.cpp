# include <iostream>
# include <cstring>

using namespace std;

int main() {

    char word[1000] = "apple";
    char b[1000];

    // Return the length of the string
    cout << strlen(word) << endl;

    // Copy a string into another variable
    // strcpy(receiver_string, copied_string);
    strcpy(b, word);
    cout << b << endl;

    // Compare two strings
    // If the returned value == 0
    // The string are the same
    cout << strcmp(word, b) << endl;

    // Concatenate two strings
    char web[30] = "www.";
    char domain[] = "weservice.com";

    // To run this safely 'web' must have enough
    // Space to hold the concatenate string;
    strcpy(b, strcat(web, domain));

    cout << b << endl;
    cout << strcmp(word, b) << endl;
 
    return 0;
}