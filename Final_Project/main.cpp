#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "airQualityTypeImp.h"

int main(){
    std::ifstream fin("airQualityUCI.txt");
    std::string word;
    getline(fin, word);
//    cout << word << endl;
    int idx = 0;
    vector<airQualityTypeImp> v;
    while(fin >> word){
        airQualityTypeImp each = airQualityTypeImp();
        each.setDate(word);
        for(int i=1;i<=14;i++){
            fin >> word;
            if(i==1) each.setTime(word);
            if(i==12) each.setT(atof(word.c_str()));
            if(i==13) each.setRH(atof(word.c_str()));
            if(i==14) each.setAH(atof(word.c_str()));
        }
        v.push_back(each);
    }

    // testing Q1
    ave_t_month(v, "2004", "3");
    ave_t_month(v, "2004", "12");
    ave_t_month(v, "2020", "3");
    cout << "Q1 over\n\n";

    // testing Q2
    ave_rh_month(v, "2004", "3");
    ave_rh_month(v, "2004", "12");
    ave_rh_month(v, "2020", "3");
    cout << "Q2 over\n\n";

    // testing Q3
    ave_ah_month(v, "2004", "3");
    ave_ah_month(v, "2004", "12");
    ave_ah_month(v, "2020", "3");
    cout << "Q3 over\n\n";

    // testing Q4
    t_rh_ah_datetime( v,"2004/3/11", "18:00:00");
    t_rh_ah_datetime( v,"2004/3/32", "18:00:00");
    cout << "Q4 over\n\n";

    // testing Q5
    max_t_month(v, "2004", "3");
    max_t_month(v, "2004", "12");
    max_t_month(v, "2020", "3");
    cout << "Q5 over\n\n";

    // testing Q6
    max_rh_month(v, "2004", "3");
    max_rh_month(v, "2004", "12");
    max_rh_month(v, "2020", "3");
    cout << "Q6 over\n\n";

    // testing Q7
    max_ah_month(v, "2004", "3");
    max_ah_month(v, "2004", "12");
    max_ah_month(v, "2020", "3");
    cout << "Q7 over\n\n";

    // testing Q8
    higher_t(v, "2004", "3");
    higher_t(v, "2004", "12");
    higher_t(v, "2020", "3");
    cout << "Q8 over\n\n";

    // testing Q9
    higher_rh(v, "2004", "3");
    higher_rh(v, "2004", "12");
    higher_rh(v, "2020", "3");
    cout << "Q9 over\n\n";

    // testing Q10
    higher_ah(v, "2004", "3");
    higher_ah(v, "2004", "12");
    higher_ah(v, "2020", "3");
    cout << "Q10 over\n\n";



}