#include <iostream>
using namespace std;

//Hoa hồng chứng khoán
int main(){
  int numStock = 750;
  int stockPrice = 35;
  float paymentWithoutCommission = numStock * stockPrice;
  float commission = 0.02 * paymentWithoutCommission;
  float total = paymentWithoutCommission + commission;


  cout << "So tien thanh toan cho co phieu: " << paymentWithoutCommission << '$' << endl;
  cout << "So tien hoa hong: " << commission << '$' << endl;
  cout << "Tong so tien da thanh toan: " << total << '$' << endl;
  return 0;
}