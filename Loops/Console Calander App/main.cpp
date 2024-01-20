#include <iostream>
#include <string>
#include <iomanip>
/*
This program will print the calendar for the year the user inputs. [2019, 2020, etc.]
The user should also input the first day of the year. [1 = Monday, 2 = Tuesday, etc.]
The output will be formatted as a calendar.
*/

const int MONDAY {1};
const int TUESDAY {2};
const int WEDNESDAY {3};
const int THURSDAY {4};
const int FRIDAY {5};
const int SATURDAY {6};
const int SUNDAY {7};

std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

bool isLeap (int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int getDaysInMonth(int month, int year){
    //Check if February
    if (month == 2) {
        return isLeap(year)?29:28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int userInputYear(){
    int year;
    std::cout << "Enter a year : ";
    std::cin >> year;
    //Check if user input is valid
    while(year < 0){
        std::cout << "Error! Please enter a positive number: ";
        std::cin >> year;
    }
    return year;
}

int userInputFirstDay(){
    int firstDay;
    std::cout << "Enter the first day of the year [1 = Monday,...,7 = Sunday]: ";
    std::cin >> firstDay;
    //Check if user input is valid
    while(firstDay > 7 || firstDay < 1){
        std::cout << "Error! Please enter a number between 1 and 7: ";
        std::cin >> firstDay;
    }
    return firstDay;
}

void printCalendar(int year, int firstDay){
    //Print the calendar
    size_t month_count = 0;
    const short WIDTH = 7;

    std::cout << std::endl;
    std::cout << "Calendar for " << year << std::endl;
    
    while (month_count < 12)
    {
        std::cout << "--" << months[month_count] << " " << year << " " << "--" << std::endl;
        //print the days of the week
        for(std::string day : {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"}){
            std::cout << std::right << std::setw(WIDTH) << day;
        }
        std::cout << std::endl;

        int daysInMonth = getDaysInMonth(month_count + 1, year);
        
        //print the leading spaces for the first day, if firstDay is '1' skip loop
        for (int i = 1; i < firstDay; i++) {
            std::cout << std::setw(WIDTH) << " ";
        }

        //print the days of the month
        for (int i = 1; i <= daysInMonth; i++) {
            std::cout << std::setw(WIDTH) << i;
            if ((i + firstDay - 1) % 7 == 0) {
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;

        //update firstDay
        firstDay = (firstDay + daysInMonth) % 7;

        //if firstDay is 0, reset it to 7
        if (firstDay == 0) {
            firstDay = 7;
        }

        std::cout << std::endl;
        month_count++;
    }
}

int main(){

    int year, firstDay;
    bool isLeapYear {false};
    year = userInputYear();
    firstDay = userInputFirstDay();

    printCalendar(year, firstDay);

    //code to prevent console from closing
    system("pause");
    return 0;
}