#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << endl;
    cout << "Welcome to territory control." << endl;
    cout << endl;
    cout  << "Type in your x position and y position(separated by a space): ";
    cin >> x >> y;

    if ((x >= -10 && x <= 10) && (y >= -5 && y <= 5)) {
        cout << "You are completely surrounded. Don't move!" << endl;
    }else {
        cout << "You're out of reach!" << endl;
    }
    
    return 0;
}