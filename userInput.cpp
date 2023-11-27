#include <iostream>
#include <iomanip>
#include "userInput.h"
#include <cctype>

using namespace std;

double userInput::getInitialInvestment() { //defined getter methods and to return to the desired variable.
    return initialInvestment;
}

double userInput::getMontlhyDeposit() {
    return monthlyDeposit;
}

double userInput::getAnnualInterest() {
    return annualInterest;
}

int userInput::getNumOfYears() {
    return numOfYears;
}

// prints the menu with the format requested.
void userInput::printMenu() { 

    cout << "******************************" << endl;
    cout << "********* Data Input *********" << endl;
    cout << "Initial Investment Amount: ";
    cin >> initialInvestment;
    cout << "Monthly Deposit: ";
    cin >> monthlyDeposit;
    cout << "Annual Interest: ";
    cin >> annualInterest;
    cout << "Number Of Years: ";
    cin >> numOfYears;
    cout << "Press enter to continue . . ." << endl;
    
    cin.get(); //waits for the user to press any key.
    system("cls"); // clears the console. if using linux or macOS replace "system("cls");" with "system("clear")".
}

char userInput::userEnter() { //prompts the user to continue making other calculations
    char userChar;

    cout << "Would you like to do a new calculation? (Y/N) ";
    cin >> userChar;
    userChar = toupper(userChar); // converts the user input to uppercase.

    return userChar;
};
