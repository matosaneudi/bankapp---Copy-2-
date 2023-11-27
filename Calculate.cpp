#include <iostream>
#include <iomanip>
#include "Calculate.h"
#include <conio.h> 

using namespace std;

void Calculate::printDetailsNoDeposit( double initial, double interest, int years) { 
    
    initialAmount = initial;
    interestAmount = interest; 
    numOfYears = years;
    
    // print year with two tabs
    std::cout << "         Balance and Interest without monthly Deposits          " << std::endl; 
    std::cout << " ====================================================================  " << std::endl;
    std::cout << " Year" << "       " << "Year End Balance" << "        " << "interest Earned" << std::endl;
    std::cout << " --------------------------------------------------------------------- " << std::endl;

    //calculations 
    int i; 

    for (i = 0; i < numOfYears; i++) { //iterates over the years of the investemnt.
        
        totalInterest = (totalAmount) * ((interestAmount / 100) /12); // calculates the interest on the ammount.

        totalAmount = totalAmount + totalInterest;

        std::cout << (i + 1) << "\t\t" << totalAmount << "\t\t" << totalInterest << std::endl;
    }

}

void Calculate::printDetailsWithDeposit(double initial, double deposit, double interest, int years) { 
    
    initialAmount = initial;
    depositAmount = deposit;   
    interestAmount = interest; 
    numOfYears = years;
    
    std::cout << "         Balance and Interest with additonal monthly Deposits          " << std::endl; 
    std::cout << " ====================================================================  " << std::endl;
    std::cout << " Year" << "       " << "Year End Balance" << "        " << "interest Earned" << std::endl;
    std::cout << " --------------------------------------------------------------------- " << std::endl;

    //perform calculations here 
    int i; 
    totalAmount = initial;
    
    for (i = 0; i < numOfYears; i++ ) { // iterates over the years of the investment .

        yearEndInterest = 0; //resets the interest earened every iteration. 

        int k; 

        for (k = 0; k < 12; k++) { //calculates the ammunt witht the montly deposit. 

            totalInterest = (totalAmount + depositAmount) * ((interestAmount / 100) /12);

            yearEndInterest += totalInterest;

            totalAmount = totalAmount + depositAmount + totalInterest;
        }
        
        std::cout << (i + 1) << "\t\t" << totalAmount << "\t\t" << yearEndInterest << std::endl;        
        
    }

    std::cout << std::endl; 
    std::cout << std::endl << "Press any button to continue...."; //pauses the display and waits for user interaction.
    cin.get();                                                      //recieves the user interaction such as a keystroke.
    system("cls");                                                //clears screen for next display.

}