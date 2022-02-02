#include <iostream>

using namespace std;

void makeArray(double arr[]) {
   for(int i = 0; i < 50; ++i) {
       if(i < 25) {
           arr[i] = i*i;
       } else {
           arr[i] = 3*i;
       }
   }
}

void outputArray(double arr[]) {
   for(int i = 0; i < 50; ++i) {
       cout << arr[i] << "\t";
       if((i+1)%10 == 0) {
           cout << endl;
       }
   }
}

int main() {
   double arr[50];
   makeArray(arr);
   outputArray(arr);
   return 0;
}