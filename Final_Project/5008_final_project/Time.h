#ifndef TIME_TIME_H
#define TIME_TIME_H
using namespace std;
// declare the functions
// hide the implementation from the users
class Time
{

public:
// Default constructor - same name as the class name
// one without attributes
    Time();

// Specific constructor - data members
// one with attributes
    Time(int h, int m, int s);
    Time(int h, int m);
    Time(string str);
// Mutators or setters - 3 single setters and 1 combined setter
    void setHour(int h);
    void setMin(int m);
    void setSec(int s);
    void setTime(int h, int m, int s);

// Accessors or getters
    int getHour();
    int getMin();
    int getSec();
    int incrementHours();
    int incrementMinutes();
    int incrementSeconds();
// const in front of the time, variable cannot be changed,
// put const in the function, the function cannot change anything
// inside the function
    bool equalTime(const Time &) const;

    void print() const;

// data members - 3 attributes
private:
    int hour;
    int mins;
    int secs;
};



#endif //TIME_TIME_H