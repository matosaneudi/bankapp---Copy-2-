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

void run(userInput input1) {
    userInput userInputs;
    Calculate calc;
    
    system("clear");  // Clear screen for Windows, change to system("clear") for Unix/linux systems.
    input1.printMenu();
    
    // calls the printDetails function to output the calculation in the desired formatting.
    calc.printDetailsNoDeposit(input1.getInitialInvestment(),input1.getAnnualInterest(), input1.getNumOfYears());
    calc.printDetailsWithDeposit(input1.getInitialInvestment(), input1.getMontlhyDeposit(), input1.getAnnualInterest(), input1.getNumOfYears());

}
int main () { 
    userInput input1;
    run(input1);
    char userChoice = input1.userEnter();
    do {
        if (userChoice == 'Y') { 
            run(input1);
        }
        
        else if (userChoice == 'N') {
            break;
        }
        
        else {
            cout << "Invalid input, please try again. ";
            userChoice = input1.userEnter();
        }
    }
    while (userChoice != 'N');

    return 0;

};