#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Please type in your age :" << endl;
    cin >> age;
    if (age < 21) {
        cout << "Sorry, you are too young for the treatment." << endl;
    }else if (age > 39) {
        cout << "Sorry, you are too old for the treatment." << endl;
    }else {
        cout << "You are eligible for treatment." << endl;
    }
    return 0;
}