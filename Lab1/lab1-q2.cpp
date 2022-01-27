#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double milkProduced, cartonsRequired;
    
    const double cartonSize = 3.78;
    const double productionCost = 0.38;
    const double cartonProfit = 0.27;
    
    cout << "How much milk did you produce? ";
    cin >> milkProduced;
    
    cartonsRequired = milkProduced / cartonSize;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "That is going to require " << static_cast<int>(cartonsRequired) << " cartons" << endl;
    cout << "Total Cost to Produce: $" << cartonsRequired * productionCost << endl;
    cout << "Total Profit: $" << cartonsRequired * cartonProfit << endl;
    
    
    return 0;
}
