#include <iostream>
#include <iomanip>
#include "Calculate.h"
#include <conio.h> 

using namespace std;

void Calculate::printDetailsNoDeposit( int years, double totalAmount, double interest) { 
    
    numOfYears = years;
    initialAmount = totalAmount;
    //initialAmount = amount;
    interestAmount = interest; 

    // print year with two tabs
    std::cout << "        Balance and Interest without additonal monthly Deposits        " << std::endl; 
    std::cout << " ====================================================================  " << std::endl;
    std::cout << " Year" << "\t\t";
    std::cout << "Year End Balance" << "\t\t";
    //std::cout << "interest Earned" << endl;
    std::cout << " --------------------------------------------------------------------- " << std::endl;

    //calculations 
    int i; 

    for (i = 0; i < years; i++) { //iterates over the years of the investemnt.
        
        totalInterest = ((totalAmount) * (interestAmount / 100)); // calculates the interest on the ammount.

        totalAmount = totalAmount + totalInterest;

        std::cout << years << "\t\t" << totalAmount << "\t\t" << totalInterest << std::endl;
    }

}

void Calculate::printDetailsWithDeposit(int years, double totalAmount, double interest, double deposit) { 
    
    numOfYears = years;
    initialAmount = totalAmount;
    interestAmount = interest; 
    depositAmount = deposit; 
    
    
    std::cout << "         Balance and Interest with additonal monthly Deposits          " << std::endl; 
    std::cout << " ====================================================================  " << std::endl;
    std::cout << " Year" << "       " << "Year End Balance" << "        " << "interest Earned   " << std::endl;
    std::cout << " --------------------------------------------------------------------- " << std::endl;

    //perform calculations here 
    int i; 

    for (i = 0; i < years; i++ ) { // iterates over the years of the investment .

        yearEndInterest = 0; //resets the interest earened every iteration. 

        int k; 

        for (k = 0; k < 12; k++) { //calculates the ammunt witht the montly deposit. 

            totalInterest = ((totalAmount + deposit) * (interest / 100) /12);

            yearEndInterest += totalInterest;
        }
        
        std::cout << years << "\t\t" << totalAmount << "\t\t" << yearEndInterest << std::endl;        
        
    }

    std::cout << std::endl; 
    std::cout << std::endl << "Press any button to continue...."; //pauses the display and waits for user interaction.
    cin.get();                                                      //recieves the user interaction such as a keystroke.
    system("cls");                                                //clears screen for next display.

}