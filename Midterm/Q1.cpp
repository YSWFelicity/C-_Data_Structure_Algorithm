#include<iostream>
 
using namespace std;
 
    int main(){
    
    float totalcost, totalsalary, yearlyrent, electricitycost,markedupprice,listcost;
    
    float markeduppercentage;
    
    cout << "Please enter the total cost of merchandise: ";
    cin >> listcost;
    cout << endl;
    
    cout << "Please enter the yearly rent: ";
    cin >> yearlyrent;
    cout << endl;
    
    cout << "Please enter the salary of the employees: ";
    cin >> totalsalary;
    cout << endl;
    
    cout << "Please enter the elctricity cost: ";
    cin >> electricitycost;
    cout << endl;
    
    totalcost = listcost + yearlyrent + totalsalary + electricitycost;
    
    //marked up price is 110 percent of the total cost
    markedupprice = 1.1 * totalcost;
    
    //list price is inclusive of the 15% discount i.e. list price is 85% of the markedupprice
    listcost = 0.85 * markedupprice;
    
    cout << "Marked up price: " << markedupprice << endl;
    cout << "List price (sale price): " << listcost << endl;
    
    
    return 0;
}