#include <iostream>

using namespace std;

 

int main()

{

    //declare variables

    int pop_A;

    int pop_B;

    int year = 1;

    double growth_rate_A;

    double growth_rate_B;

   

    //Prompt the user to input the population and growth rate of Town A.

    cout <<"Enter the population and growth rate of Town A: ";

    cin >> pop_A >> growth_rate_A;

    cout << endl;

   

    //Prompt the user to input the population and growth rate of Town B.

    cout <<"Enter the population and growth rate of Town B: ";

    cin >> pop_B >> growth_rate_B;

    cout << endl;

   

    if (pop_A < pop_B && growth_rate_A > growth_rate_B) {

        do {

           

            (pop_A = ((growth_rate_A /100) * pop_A) + pop_A); //calculates the population growth in one year.

            (pop_B = ((growth_rate_B / 100) * pop_B) + pop_B); year++;

        } while (pop_A < pop_B);

       

        int pop_Diff = pop_A - pop_B;

        int pop_Total = pop_A + pop_B;

 

        cout <<"Town A will surpass Town B in population after " << year << " years." << endl;

        cout << "The final population of Town A is: " << pop_A << endl;

        cout << "The final population of Town B is: " << pop_B << endl;

        cout << "In year " << year << ", Town A has " << pop_Diff << " more people than Town B." << endl;

        cout << "The total population of both Town A and Town B is " << pop_Total << endl;

    }

    else {

        cout << "The Values Doesn't Compute.";

    }

   

    return 0;

}