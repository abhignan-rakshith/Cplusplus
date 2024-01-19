#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Please type in an integral value: " << endl;
    cin >> x;
    //calculate even or odd
    if (x % 2 == 0) {
        cout << x << " is even" << endl;
    } else {
        cout << x << " is odd" << endl;
    }
    return 0;
}