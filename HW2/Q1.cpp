#include <iostream>
#include <iomanip>
using namespace std;

double getInput(string msg){
    double value;
    while (1) {
cout<<msg;
cin >> value;
if (cin.good()) break;      // if value is indeed double then break
    else {                      // otherwise keep prompting
cout << "Invalid Input! Please input a numerical value." << endl;
cin.clear();
cin.ignore(100000, '\n');
    }
    }
    return value;               // return value
}

double computeBillingAmount(double totalIncome, int consultingTime, double hourlyRate){

    double amount;
    if (totalIncome <= 25000){          // if low income
        // if consulting time more than 30 mins
        if (consultingTime>=30) amount = hourlyRate*0.40*(consultingTime-30)/60;
        // otherwise
        else amount = 0;
    }

   else{                               // if high income
        // if consulting time more than 20 mins
        if (consultingTime>=20) amount = hourlyRate*0.70*(consultingTime-20)/60;
        // otherwise
        else amount = 0;
     }

    return amount;              // return amount
}

void outputLine(string msg, int msgLen, double amount, int amountLen){
    cout<< setw(msgLen);
    cout<<msg;
    cout<< setw(amountLen);
    cout<<"$"<<amount<<endl;
}

int main() {
double income, rate, time, amount;
income = getInput("Enter your income: $");
rate = getInput("Enter the hourly rate: $");
time = getInput("Enter time spent (in minutes): ");
amount = computeBillingAmount(income, time, rate);
cout<<fixed<<setprecision(2);
outputLine("Income: ",18,income,5);
outputLine("Hourly rate: ",18,rate,8);
outputLine("Billing amount: ",18,amount,8);
return 0;

}