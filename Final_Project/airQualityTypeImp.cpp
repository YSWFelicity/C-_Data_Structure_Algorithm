#include "airQualityTypeImp.h"

airQualityTypeImp::airQualityTypeImp(){

}
void airQualityTypeImp::setDate(string date){
    Date = date;
}
string airQualityTypeImp::getDate(){
    return Date;
}

void airQualityTypeImp::setTime(string time){
    Time = time;
}
string airQualityTypeImp::getTime(){
    return Time;
}

void airQualityTypeImp::setT(double t){
    T = t;
}
double airQualityTypeImp::getT(){
    return T;
}

void airQualityTypeImp::setRH(double rh){
    RH = rh;
}
double airQualityTypeImp::getRH(){
    return RH;
}

void airQualityTypeImp::setAH(double ah){
    AH = ah;
}
double airQualityTypeImp::getAH(){
    return AH;
}

bool checkmonth(string year, string month, airQualityTypeImp x){
    string y = "";
    string m = "";
    string date = x.getDate();
    int i = 0;
    for(;i<date.length();i++){
        if(date[i]=='/'){
            i++;
            break;
        }
        else{
            y += date[i];
        }
    }

    for(;i<date.length();i++){
        if(date[i]=='/'){
            break;
        }
        else{
            m += date[i];
        }
    }
    // cout << y << ' '<< m << endl;
    if(y == year && m == month){
        return true;
    }
    return false;

}

void ave_t_month(vector<airQualityTypeImp> v, string year, string month){
    double res = 0;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getT()==-200) continue;
            res+=v[i].getT();
            cnt++;
        }
    }
    if(cnt!=0){
        cout << res/cnt << endl;
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}

void ave_rh_month(vector<airQualityTypeImp> v, string year, string month){
    double res = 0;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getRH()==-200) continue;
            res+=v[i].getRH();
            cnt++;
        }
    }
    if(cnt!=0){
        cout << res/cnt << endl;
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}

void ave_ah_month(vector<airQualityTypeImp> v, string year, string month){
    double res = 0;
    int cnt= 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getAH()==-200) continue;
            res+=v[i].getAH();
            cnt++;
        }
    }
    if(cnt!=0){
        cout << res/cnt << endl;
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}

void t_rh_ah_datetime(vector<airQualityTypeImp> v, string date, string time){
    bool flag = true;
    for(int i=0; i<v.size(); i++){
        if(v[i].getDate() == date && v[i].getTime() == time){
            flag = false;
            cout << v[i].getT() << ' ' << v[i].getRH() << ' ' << v[i].getAH() << endl;
        }
    }
    if(flag){
        cout << "cannot find the date & time entered or the month entered has no data\n";
    }
}
void max_t_month(vector<airQualityTypeImp> v, string year, string month){
    double res = -1;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getT()==-200) continue;
            res=max(res, v[i].getT());
            cnt++;
        }
    }
    if(cnt!=0){
        cout << res << endl;
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}

void max_rh_month(vector<airQualityTypeImp> v, string year, string month){
    double res = -1;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getRH()==-200) continue;
            res=max(res, v[i].getRH());
            cnt++;
        }
    }
    if(cnt!=0){
        cout << res << endl;
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}

void max_ah_month(vector<airQualityTypeImp> v, string year, string month){
    double res = -1;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getAH()==-200) continue;
            res=max(res, v[i].getAH());
            cnt++;
        }
    }
    if(cnt!=0){
        cout << res << endl;
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}

void higher_t(vector<airQualityTypeImp> v, string year, string month){
    double ave = 0;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getT()==-200) continue;
            ave+=v[i].getT();
            cnt++;
        }
    }
    if(cnt!=0){
        ave/=cnt;
        vector<airQualityTypeImp> res;
        for(int i=0; i<v.size(); i++){
            if(checkmonth(year, month, v[i]) && v[i].getT() > ave){
                res.push_back(v[i]);
            }
        }
        for(int i=0;i<res.size();i++){
            cout << res[i].getDate() << ' ' << res[i].getTime() << endl;
        }
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}


void higher_rh(vector<airQualityTypeImp> v, string year, string month){
    double ave = 0;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getRH()==-200) continue;
            ave+=v[i].getRH();
            cnt++;
        }
    }
    if(cnt!=0){
        ave/=cnt;
        vector<airQualityTypeImp> res;
        for(int i=0; i<v.size(); i++){
            if(checkmonth(year, month, v[i]) && v[i].getRH() > ave){
                res.push_back(v[i]);
            }
        }
        for(int i=0;i<res.size();i++){
            cout << res[i].getDate() << ' ' << res[i].getTime() << endl;
        }
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}

void higher_ah(vector<airQualityTypeImp> v, string year, string month){
    double ave = 0;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(checkmonth(year, month, v[i])){
            if(v[i].getAH()==-200) continue;
            ave+=v[i].getAH();
            cnt++;
        }
    }

    if(cnt!=0){
        ave/=cnt;
        vector<airQualityTypeImp> res;
        for(int i=0; i<v.size(); i++){
            if(checkmonth(year, month, v[i]) && v[i].getAH() > ave){
                res.push_back(v[i]);
            }
        }
        // cout << res.size() << endl;
        for(int i=0;i<res.size();i++){
            cout << res[i].getDate() << ' ' << res[i].getTime() << endl;
        }
    }
    else{
        cout << "cannot find the month entered or the month entered has no data\n";
    }
}