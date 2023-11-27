



class Calculate { 
    
    public:

        void printDetailsNoDeposit(double initial, double interest, int years);
        void printDetailsWithDeposit(double initial, double deposit, double interest, int years);

    private:

    double initialAmount; 
    double interestAmount; 
    double depositAmount;
    int numOfYears; 
    double totalInterest; 
    double totalAmount; 
    double yearEndInterest;

};