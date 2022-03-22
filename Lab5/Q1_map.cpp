#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	map<string, int> grades;

	grades.insert(pair<string, int>("Felicity", 100));
	grades.insert(pair<string, int>("Lily", 98));
	grades.insert(pair<string, int>("Amy", 95));
	grades.insert(pair<string, int>("Cindy", 93));
	grades.insert(pair<string, int>("Lucy", 96));

	for (map<string, int>::iterator itr=grades.begin(); itr!=grades.end(); itr++) {
		cout << itr->first << " " << itr->second << endl;
	}

	return 0;
}