class Calculate { 
    
    public:
        //Delclaration of public functions to be used in calculate.cpp
        void printDetailsNoDeposit(double initial, double interest, int years);
        void printDetailsWithDeposit(double initial, double deposit, double interest, int years);

    
    private:    //Declaration of private variables.
        double initialAmount; 
        double interestAmount; 
        double depositAmount;
        int numOfYears; 
        double totalInterest; 
        double totalAmount; 
        double yearEndInterest;

};