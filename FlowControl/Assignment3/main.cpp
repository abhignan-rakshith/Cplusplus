#include <iostream>
using namespace std;

const int Monday = 1;
const int Tuesday = 2;
const int Wednesday = 3;
const int Thursday = 4;
const int Friday = 5;
const int Saturday = 6;
const int Sunday = 7;

int main() {
    int day_num;
    cout << "Which day is today? [1: Monday,..., 7: Sunday]: " << endl;
    cin >> day_num; 
    switch(day_num)
    {
        case Monday: cout << "Today is Monday. Let's go to work!" << endl; break;
        case Tuesday: cout << "Today is Tuesday. Let's go to the grocery!" << endl; break;
        case Wednesday: cout << "Today is Wednesday. Let's go to the gym!" << endl; break;
        case Thursday: cout << "Today is Thursday. Let's go to the library!" << endl; break;
        case Friday: cout << "Today is Friday. Let's go to eat!" << endl; break;
        case Saturday: cout << "Today is Saturday. Let's go to sleep!" << endl; break;
        case Sunday: cout << "Today is Sunday. Let's go to relax!" << endl; break;
        default: cout << day_num << " is not a valid day. Bye!" << endl;
    }
    return 0;
}