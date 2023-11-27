



class Calculate { 
    
    public:

        void printDetailsNoDeposit(int year, double yearEndBalance, double interestEarned);
        void printDetailsWithDeposit(int year, double yearEndBalance, double interestEarned, double deposit);

    private:

    double initialAmount; 
    double interestAmount; 
    double depositAmount;
    int numOfYears; 
    double totalInterest; 
    double totalAmount; 
    double yearEndInterest;

};