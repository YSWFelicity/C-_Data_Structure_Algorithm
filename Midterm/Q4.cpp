#include <iostream>
#include<stack>

using namespace std;

int main()
{
stack<string> stack;
//The list of students names are: Felicity, Lily, Amy, Sally, Tina
    stack.push("Felicty");
    stack.push("Lily");
    stack.push("Amy");
    stack.push("Sally");
    stack.push("Tina");
     
       
    while (!stack.empty()) {
        cout<< stack.top()<<" ";
        stack.pop();
    }
    return 0;
}