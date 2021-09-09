#include <iostream>
using namespace std;

//Mức nước biển
int main(){
  float defaultValue = 1.5;
  float afterFiveYears = defaultValue * 5;
  float afterSevenYears = defaultValue * 7;
  float afterTenYears = defaultValue * 10;

  cout << "Sau 5 nam: " << afterFiveYears << " mm" << endl;
  cout << "Sau 7 nam: " << afterSevenYears << " mm" << endl;
  cout << "Sau 10 nam: " << afterTenYears << " mm" << endl;
  return 0;
}