#include <iostream>
#include<ctime>

class Date {
private:
    int day, month, year;

public:
    // Date() {
    //     // Default constructor to initialize with current date
    //     // Note: This is just a simple example and might not handle edge cases like leap years.
    //     // For simplicity, let's assume the current date is 29th August 2023.
    //     day = 29;
    //     month = 8;
    //     year = 2023;
    // }
    Date(){
        time_t t=time(NULL);
        tm *ptr=localtime(&t);
        day=ptr->tm_mday;
        month=ptr->tm_mon+1;
        year=ptr->tm_year+1900;
    }


    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    void Calculate_Date(int daysToAdd) {
        // Add the given number of days to the current date

        while (daysToAdd > 0) {
            int daysInMonth;

            if (month == 2) {
                daysInMonth = isLeapYear(year) ? 29 : 28;
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                daysInMonth = 30;
            } else {
                daysInMonth = 31;
            }

            if (day + daysToAdd > daysInMonth) {
                daysToAdd -= (daysInMonth - day + 1);
                day = 1;
                month++;
                if (month > 12) {
                    month = 1;
                    year++;
                }
            } else {
                day += daysToAdd;
                daysToAdd = 0;
            }
        }
    }

    void Display() {
        std::cout << "Future Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date currentDate; // Create object using default constructor
    int daysToAdd;

    std::cout << "Enter number of days to add: ";
    std::cin >> daysToAdd;

    Date futureDate = currentDate; // Create another object
    futureDate.Calculate_Date(daysToAdd); // Calculate future date

    futureDate.Display(); // Display future date

    return 0;
}
