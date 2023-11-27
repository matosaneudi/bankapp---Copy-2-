/*
~ Aneudi Matos 
~ CS210
~ Proffesor Joel Driver
~ 26 November 2023
*/

#include <iostream>
#include "userInput.h"
#include "calculate.h"

using namespace std;

int main () { 
    userInput userInputs;
    Calculate calc;
    char userChoice;

    
    do {
        system("cls");  // Clear screen for Windows, change to system("clear") for Unix-like systems
        userInput input1;
        input1.printMenu();

        // calls the printDetails from the calculate.cpp 
        calc.printDetailsNoDeposit(input1.getInitialInvestment(),input1.getAnnualInterest(), input1.getNumOfYears());
        calc.printDetailsWithDeposit(input1.getInitialInvestment(), input1.getMontlhyDeposit(), input1.getAnnualInterest(), input1.getNumOfYears());

        userChoice = input1.userEnter();
        //userChoice = userInputs.userEnter();

        if (userChoice == 'Y') { 
            continue;
        }
        
        else if (userChoice == 'N') {
            break;
        }
        
        else {
            cout << "Invalid input, please try again. ";
        }
    }
    while (userChoice != 'N');

    return 0;

};