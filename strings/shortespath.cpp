# include <iostream>

using namespace std;

int main() {

    char route[100];
    int x = 0;
    int y = 0;

    cin.getline(route, 1000);

    for (int i = 0; route[i] != '\0'; i++) {

        switch (route[i]) {
            case 'N': 
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x--;
                break;
            case 'E':
                x++;
                break;
            default:
                break;
        }
    }

    if (x >= 0 && y >= 0) {

        while (y--) {
            cout << "N";
        }
        while (x--) {
            cout << "E";
        }
    }
    else if (x >= 0 && y <= 0) {

        while (y++) {
            cout << "S";
        }
        while (x--) {
            cout << "E";
        }
    }
    else if (x <= 0 && y >= 0) {
        
        while (y--) {
            cout << "N";
        }
        while (x++) {
            cout << "W";
        }
    }
    else if (x <= 0 && y <= 0) {

        while (y++) {
            cout << "S";
        }
        while (x++) {
            cout << "W";
        }
    }

    return 0;
}