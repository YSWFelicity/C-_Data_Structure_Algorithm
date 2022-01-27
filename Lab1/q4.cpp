#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int accountNumber;
    float minimumBalance, currentBalance;
    char accountType;
    
    const float SAVINGS_SERVICE_CHARGE = 10.00;
    const float CHECKING_SERVICE_CHARGE = 25.00;
    const float SAVINGS_INTEREST_RATE = 0.04;
    const float CHECKING_LOW_INTEREST_RATE = 0.03;
    const float CHECKING_DEFAULT_INTEREST_RATE = 0.05;
    
    cout << "Please enter the account details: ";
    cin >> accountNumber >> accountType >> minimumBalance >> currentBalance;
    
    switch (accountType) {
        case 's':
        case 'S':
            cout << "Account Number: " << accountNumber << endl;
            cout << fixed << showpoint << setprecision(2);
            cout << "Account Type: Savings" << endl;
            cout << "Minimum Balance: $" << minimumBalance << endl;
            cout << "Current Balance: $" << currentBalance << endl;
            
            if (currentBalance < minimumBalance) {
                cout << "Service Fee: $" << SAVINGS_SERVICE_CHARGE << endl;
            } else {
                cout << "Interest Earned: $" << currentBalance * SAVINGS_INTEREST_RATE
                << " at " << SAVINGS_INTEREST_RATE*100 << "% p.a" << endl;
            }
            break;
        case 'c':
        case 'C':
            cout << "Account Number: " << accountNumber << endl;
            cout << fixed << showpoint << setprecision(2);
            cout << "Account Type: Checking" << endl;
            cout << "Minimum Balance: $" << minimumBalance << endl;
            cout << "Current Balance: $" << currentBalance << endl;
            
            if (currentBalance < minimumBalance) {
                cout << "Service Fee: $" << CHECKING_SERVICE_CHARGE << endl;
            } else if (currentBalance <= (minimumBalance + 5000.00)) {
                cout << "Interest Earned: $" << currentBalance * CHECKING_LOW_INTEREST_RATE
                << " at " << CHECKING_LOW_INTEREST_RATE*100 << "% p.a" << endl;
            } else {
                cout << "Interest Earned: $" << currentBalance * CHECKING_DEFAULT_INTEREST_RATE
                << " at " << CHECKING_DEFAULT_INTEREST_RATE*100 << "% p.a" << endl;
            }
            break;
        default:
            cout << "There was an error with your input" << endl;
            return 1;
            break;
    }
    
    return 0;
}