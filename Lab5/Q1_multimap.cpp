#include <iostream>
#include <string>
#include <map>
#include <list>

using namespace std;

int main()
{
    multimap<string,string> students;
    students.insert(make_pair("Felicity","100"));
    students.insert(make_pair("Lily","98"));
    // students.insert(make_pair("Amy,"95"));
    // students.insert(make_pair("Cindy","93"));
    // students.insert(make_pair("Lucy","96"));

        for (auto itr = students.begin(); itr != students.end(); ++itr) 
        { 
        cout << itr->first << '\t' << itr->second << '\n'; 
        } 
    
}