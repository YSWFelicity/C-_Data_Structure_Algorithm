#include <iostream>
using namespace std;

int main () {
            int n, x, oddSum = 0, evenSum = 0;
            cout << "Enter the number of values: ";
            cin >> n;
            cout << "Enter your values:" << endl;
            for (int i = 0; i < n; i++) {
                cin >> x;
                if (x % 2 == 0)
                    evenSum += x;
                else
                    oddSum += x;
            }
            cout << "Sum of Even Numbers: " << evenSum << endl;
            cout << "Sum of Odd Numbers: " << oddSum << endl;
            return 0;
        }