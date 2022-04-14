#ifndef CS5008_FINAL_PROJECT_AIRQUALITYTYPEIMP_H
#define CS5008_FINAL_PROJECT_AIRQUALITYTYPEIMP_H
#include <iostream>
#include <string>
#include <vector>


using namespace std;
class airQualityTypeImp{
private:
    string Date;
    string Time;
    double T;
    double RH;
    double AH;
public:
    airQualityTypeImp();
    void setDate(string date);
    string getDate();
    void setTime(string time);
    string getTime();
    void setT(double t);
    double getT();
    void setRH(double rh);
    double getRH();
    void setAH(double ah);
    double getAH();
};
void ave_t_month(vector<airQualityTypeImp> v, string year, string month);
void ave_rh_month(vector<airQualityTypeImp> v, string year, string month);
void ave_ah_month(vector<airQualityTypeImp> v, string year, string month);
void t_rh_ah_datetime(vector<airQualityTypeImp> v, string date, string time);
void max_t_month(vector<airQualityTypeImp> v, string year, string month);
void max_rh_month(vector<airQualityTypeImp> v, string year, string month);
void max_ah_month(vector<airQualityTypeImp> v, string year, string month);
void higher_t(vector<airQualityTypeImp> v, string year, string month);
void higher_rh(vector<airQualityTypeImp> v, string year, string month);
void higher_ah(vector<airQualityTypeImp> v, string year, string month);




#endif //CS5008_FINAL_PROJECT_AIRQUALITYTYPEIMP_H
