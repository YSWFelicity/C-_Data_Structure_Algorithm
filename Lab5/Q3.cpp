#include <iostream>
#include <set>

using namespace std;

struct classcomp {
  bool operator() (const int& lhs, const int& rhs) const
  {return lhs>rhs;}
};

int main() {
    // Setup a standard set

    set<int> a;

    a.insert(5);
    a.insert(1);
    a.insert(6);
    a.insert(3);
    a.insert(7);
    a.insert(2);



    set<int>::iterator it;

    for ( it=a.begin(); it != a.end(); it++ )

        cout << " " << *it;

    cout << endl << endl;

    return 0;

}
