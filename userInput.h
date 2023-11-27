#include <iostream>

class userInput {

    public:
        //getters
        void printMenu();
        double getInitialInvestment();
        double getMontlhyDeposit();
        double getAnnualInterest();
        int getNumOfYears();
        char userEnter();

    //setters
        void setInitialInvestment(double value);
        void setMonthlyDeposit(double value);
        void setAnnualInterest(double value);
        void setNumOfYears(double value);
    
    private:

        double initialInvestment; 
        double monthlyDeposit;
        double annualInterest; 
        int numOfYears;

};