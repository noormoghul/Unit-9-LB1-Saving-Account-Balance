// Unit 9 LB1: Saving Account Balance

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    double annInterestRate = 0, startingBalance = 0, totalBalance = 0, monthWithdrawal = 0, monthlyInterestRate = 0, deposits = 0, totalDeposits = 0, totalWithdrawal = 0, totalInterest = 0;
    int numOfMonthsEstab = 0;
    
    cout<<"Enter your annual interest rate. For example .05\n";
    cin>> annInterestRate;
    while(annInterestRate < 0)
    {
        cout<<"Please enter a positive annual interest rate";
        cin>> annInterestRate;
    }
    
    cout<<"Enter your starting balance.\n";
    cin>> startingBalance;
    
    cout<<"How many months have passed since the account was established?\n";
    cin>> numOfMonthsEstab;
    while(numOfMonthsEstab < 0)
    {
        cout<<"Please enter a positive number\n";
        cin>>numOfMonthsEstab;
    }
    
    totalBalance = startingBalance;
    monthlyInterestRate = annInterestRate/12;
    
    for (int counter = 1; counter <= numOfMonthsEstab; ++counter)
    {
        cout<<"\n\nMonth #" <<counter <<endl;
        cout<<"Enter tha total deposits for this month\n";
        cin>>deposits;
        
        while(deposits < 0)
        {
            cout<<"Please enter a positive number\n";
            cin>>deposits;
        }
        
        totalDeposits += deposits;
        totalBalance += deposits;
        cout<<"Enter the total withdrawal for this month\n";
        cin>> monthWithdrawal;
        
        while(monthWithdrawal < 0)
        {
            cout<<"Please enter a positive number\n";
            cin>>monthWithdrawal;
        }
        
        totalWithdrawal += monthWithdrawal;
        totalBalance -= monthWithdrawal;
        totalInterest += (totalBalance * monthlyInterestRate);
        totalBalance += (totalBalance * monthlyInterestRate);
        
        while(totalBalance < 0)
        {
            cout<<"The total balance is negative, start again.";
            return 0;
        }
    }
    cout<<fixed<<setprecision(2);
    cout<<"\n\nFinal balance:"<<left<<setw(20)<<right<<setw(21)<<" $ "<<totalBalance<<endl;
    cout<<"Amount of deposits:"<<left<<setw(20)<<right<<setw(16)<<" $ "<<totalDeposits<<endl;
    cout<<"Amount of withdrawals:"<<left<<setw(20)<<right<<setw(13)<<" $ "<<totalWithdrawal<<endl;
    cout<<"Amount of interest:"<<left<<setw(20)<<right<<setw(16)<<" $ "<<totalInterest<<endl<<endl<<endl;
    
    return 0;
}


