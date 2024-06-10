#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date() {
        // Default constructor to initialize with current date
        // Note: This is just a simple example and might not handle edge cases like leap years.
        // You might want to use more robust methods to get the current date.
        // For simplicity, let's assume the current date is 29th August 2023.
        day = 29;
        month = 8;
        year = 2023;
    }

    void Calculate_Date(int daysToAdd) {
        // Add the given number of days to the current date
        day += daysToAdd;

        // Update month and year if necessary
        while (day > 30) {
            day -= 30;
            month++;
            if (month > 12) {
                month = 1;
                year++;
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
// stack<int> _push(int arr[],int n)
// {
//    // your code here
//    stack<int>ans;
//    void ppush(int x){
//        for(int i=0;i<n;i++){
//            ans.push(arr[i]);
//        }
//    }
//    return ans;
// }

// //Function to print minimum value in stack each time while popping.
// void _getMinAtPop(stack<int>s)
// {
//     // your code here
//     int res=s[i];
//     while(s.empty()){
//     for(int i=1;i<n;i++){
//         if(res>s[i]){
//             res=s[i];
//         }
//     }
    
//     cout<<res<<" ";
//     s.pop();
//     }
    
    
    
    
    
// }
