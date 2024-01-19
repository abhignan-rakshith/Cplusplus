#include <iostream>
#include <string>

using namespace std;

void findDayOfWeek(int currentDay, int dayDifference) {
    string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Ensure currentDay is in the range [1, 7]
    if (currentDay < 1 || currentDay > 7) {
        cout << currentDay <<" is not a valid day. Bye!" << endl;
        return;
    }

    // Calculate the new day index
    int newDay = (currentDay - dayDifference + 7) % 7;
    //cout << newDay << endl;

    if (newDay == 0) {
        newDay = 7;
    }
    

    // Print the result
    cout << "Starting from " << daysOfWeek[currentDay - 1] << ", going back " << dayDifference << " days lands on " << daysOfWeek[newDay - 1] << "." << endl;
}

int main() {
    int currentDay, dayDifference;

    // Get user input
    cout << "Enter the current day (1: Monday, 2: Tuesday, ..., 7: Sunday): ";
    cin >> currentDay;

    cout << "Enter the day difference: ";
    cin >> dayDifference;

    // Call the function
    findDayOfWeek(currentDay, dayDifference);

    return 0;
}
