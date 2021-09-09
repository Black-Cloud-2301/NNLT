#include <iostream>
using namespace std;

//Thanh toán hàng năm
int main(){
  int salary = 2200;
  int paidTime = 26;
  int annualPay = salary * paidTime;

  cout << "annualPay: " << annualPay << '$' << endl;
  return 0;
}