#include <iostream>
#include <iomanip>
#include "Calculate.h"


using namespace std;

void Calculate::printDetailsNoDeposit( double initial, double interest, int years) { 
    
    initialAmount = initial;
    interestAmount = interest; 
    numOfYears = years;
    
    // formats the menu with two tabs.
    std::cout << "         Balance and Interest without monthly Deposits          " << std::endl; 
    std::cout << "====================================================================  " << std::endl;
    std::cout << " Year" << "       " << "     Year End Balance" << "        " << "    Year End Earned Interest" << std::endl;
    std::cout << "--------------------------------------------------------------------- " << std::endl;

    //performs calculations with no deposit.
    int i; 
    
    totalAmount = initial;
    
    for (i = 0; i < numOfYears; i++) { //iterates over the years of the investemnt.
        
        totalInterest = ((totalAmount) * (interestAmount / 100));

        yearEndInterest += totalInterest;

        totalAmount = totalAmount + totalInterest;
        
        cout << setw(3) << (i + 1) << fixed << setprecision(2) << setw(20) << "$" << totalAmount << setw(22) << "$" << yearEndInterest << std::endl;  
    }
}
void Calculate::printDetailsWithDeposit(double initial, double deposit, double interest, int years) { 
    
    initialAmount = initial;
    depositAmount = deposit;   
    interestAmount = interest; 
    numOfYears = years;
    
    std::cout << "         Balance and Interest with additonal monthly Deposits          " << std::endl; 
    std::cout << "====================================================================" << std::endl;
    std::cout << " Year" << "       " << "     Year End Balance" << "        " << "    Year End Earned Interest" << std::endl;
    std::cout << "---------------------------------------------------------------------" << std::endl;

    //perform calculations with montlhy deposit. 
    int i; 
    totalAmount = initial;
    
    for (i = 0; i < numOfYears; i++ ) { // iterates over the years of the investment .

        yearEndInterest = 0; //resets the interest earened every iteration. 

        int k; 

        for (k = 0; k < 12; k++) { //calculates the ammount witht the monthly deposit. 

            totalInterest = (totalAmount + depositAmount) * ((interestAmount / 100) /12);

            yearEndInterest += totalInterest;

            totalAmount = totalAmount + depositAmount + totalInterest;
        }
        
        cout << setw(3) << (i + 1) << fixed << setprecision(2) << setw(20) << "$" << totalAmount << setw(22) << "$" << yearEndInterest << std::endl;        
        
    }

    std::cout << std::endl; 
    std::cout << std::endl << "Press enter to continue...."; //pauses the display and waits for user interaction.
    cin.get();                                                      //recieves the user interaction such as a keystroke.
    system("cls");                                                //clears screen for next display.

};