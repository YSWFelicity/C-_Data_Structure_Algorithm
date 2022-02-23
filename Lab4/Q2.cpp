#include <iostream>
#include<stack>

using namespace std;

int main()
{
stack<string> stack;
//The list of flower names are: Rose, Lily, Tulip, Orchid, Carnation
    stack.push("Rose");
    stack.push("Lily");
    stack.push("Tulip");
    stack.push("Orchid");
    stack.push("Carnation");
     
       
    while (!stack.empty()) {
        cout<< stack.top()<<" ";
        stack.pop();
    }
    return 0;
}