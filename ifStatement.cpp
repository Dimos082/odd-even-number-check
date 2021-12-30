// Write a program to check if the number is even or odd. 
// Take an integer input from the user, if it is even print "even", otherwise print "odd".

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number for even/odd check: \n"; cin >> number;

    // cin.fail() to ensure the user inputs an int and not anything else.
    while (cin.fail()) {
        cout << "Please enter a valid number (6 chars max) \n";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> number;
    }
    // Check if number is divisible by 2 
    if (number % 2 == 0) {
        cout << number; cout << " is even.";
    } else { 
        cout << number; cout << " is odd."; 
    }
    
    // A 'char' is a data type to store single letters.
    char response;
    cout << " Do you want to check another one? (y/n) (type 'b' to display an issue list) \n";
    cin >> response;

    if (response == 'Y' || response == 'y')
    {
        main();
    }
    if (response == 'B' || response == 'b')
    {
        cout << "Known bugs: \n 1) Numbers with 6/9 characters for int lead to execution end with return code 0.\n 2) Numbers like 100001 and 1111111113 also cause end of execution with code 0.\n 3) cin.fail() considers some numerical inputs larger than 10 digits as not valid.";
        main();
    }
    else if (response == 'N' || response == 'n') 
    {
        return 0;
    }
    
}
// Known bugs: 
// 1) Numbers with 6/9 characters for int lead to execution end with return code 0.
// 2) Numbers like 100001 and 1111111113 also cause end of execution with code 0.
// 3) cin.fail() considers some numerical inputs larger than 10 digits as not valid.

// PS. A difference between \n and endl is endl causes output buffer flushing every time it is called.
// https://www.educative.io/edpresso/what-is-the-difference-between-endl-and-n-in-cpp