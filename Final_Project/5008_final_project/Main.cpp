#include "airQualityType.h"
#include "airQualityTypeImp.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const int TIME = 1;
const int T = 12;
const int RH = 13;
const int AH = 14;

bool menu(bool flag)
{
  if (!flag)
    return false;
  cout << "\n\n\n\n\n";
  cout << "type in number 1 ~ 10 to opt\n";
  cout << "1. input month to get the average T\n";
  cout << "2. input month to get the average RH\n";
  cout << "3. input month to get the average AH\n";
  cout << "4. input date and time to get the T, RH and AH\n";
  cout << "5. input month to get the max T\n";
  cout << "6. input month to get the max RH\n";
  cout << "7. input month to get the max AH\n";
  cout << "8. input month to get the date on which the T is higher than the average\n";
  cout << "9. input month to get the date on which the RH is higher than the average\n";
  cout << "10. input month to get the date on which the AH is higher than the average\n";
  cout << "type not 1 ~ 10, exit\n";
  return flag;
}
int main()
{
  ifstream fin("airQualityUCI.txt");
  string word;
  getline(fin, word);
  int idx = 0;
  vector<airQualityType> v;
  while (fin >> word)
  {
    airQualityType each = airQualityType();
    each.setDate(date(word));
    
    for (int i = 1; i <= 14; i++)
    {
      fin >> word;
      if (i == TIME) //number of column 
        each.setTime(Time(word));
      if (i == T)
        each.setT(atof(word.c_str()));
      if (i == RH)
        each.setRH(atof(word.c_str()));
      if (i == AH)
        each.setAH(atof(word.c_str()));
    }
    v.push_back(each);
  }
  // for(int i=0;i<v.size();i++){
  //   v[i].getDate().print();
  //   cout << endl;
  // }
  bool flag = true;
  while (menu(flag))
  {
    int opt;
    cin >> opt;
    string year, month, date, time;
    switch (opt)
    {
    case 1:
      cin >> month;
      ave_t_month(v, month);
      break;
    case 2:
      cin >>  month;
      ave_rh_month(v,  month);
      break;
    case 3:
      cin >>  month;
      ave_ah_month(v,  month);
      break;
    case 4:
      cin >> date >> time;
      t_rh_ah_datetime(v, date, time);
      break;
    case 5:
      cin >>  month;
      max_t_month(v,  month);
      break;
    case 6:
      cin >>  month;
      max_rh_month(v,  month);
      break;
    case 7:
      cin >>  month;
      max_ah_month(v,  month);
      break;
    case 8:
      cin >>  month;
      higher_t(v, month);
      break;
    case 9:
      cin >>  month;
      higher_rh(v,  month);
      break;
    case 10:
      cin >>  month;
      higher_ah(v, month);
      break;
    default:
      flag = false;
    }
  }

  // // testing Q1
  // ave_t_month(v, "2004", "3");
  // ave_t_month(v, "2004", "12");
  // ave_t_month(v, "2020", "3");
  // cout << "Q1 over\n\n";

  // // testing Q2
  // ave_rh_month(v, "2004", "3");
  // ave_rh_month(v, "2004", "12");
  // ave_rh_month(v, "2020", "3");
  // cout << "Q2 over\n\n";

  // // testing Q3
  // ave_ah_month(v, "2004", "3");
  // ave_ah_month(v, "2004", "12");
  // ave_ah_month(v, "2020", "3");
  // cout << "Q3 over\n\n";

  // // testing Q4
  // t_rh_ah_datetime( v,"2004/3/11", "18:00:00");
  // t_rh_ah_datetime( v,"2004/3/32", "18:00:00");
  // cout << "Q4 over\n\n";

  // // testing Q5
  // max_t_month(v, "2004", "3");
  // max_t_month(v, "2004", "12");
  // max_t_month(v, "2020", "3");
  // cout << "Q5 over\n\n";

  // // testing Q6
  // max_rh_month(v, "2004", "3");
  // max_rh_month(v, "2004", "12");
  // max_rh_month(v, "2020", "3");
  // cout << "Q6 over\n\n";

  // // testing Q7
  // max_ah_month(v, "2004", "3");
  // max_ah_month(v, "2004", "12");
  // max_ah_month(v, "2020", "3");
  // cout << "Q7 over\n\n";

  // // testing Q8
  // higher_t(v, "2004", "3");
  // higher_t(v, "2004", "12");
  // higher_t(v, "2020", "3");
  // cout << "Q8 over\n\n";

  // // testing Q9
  // higher_rh(v, "2004", "3");
  // higher_rh(v, "2004", "12");
  // higher_rh(v, "2020", "3");
  // cout << "Q9 over\n\n";

  // // testing Q10
  // higher_ah(v, "2004", "3");
  // higher_ah(v, "2004", "12");
  // higher_ah(v, "2020", "3");
  // cout << "Q10 over\n\n";
}