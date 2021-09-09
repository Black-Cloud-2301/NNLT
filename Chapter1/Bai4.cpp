#include <iostream>
#include <iomanip>
using namespace std;

//Hóa đơn bán hàng
int main(){

  float paid = 88.67;
  float tax = 0.0675 * paid;
  float tip = (paid + tax) * 0.2;

  cout << "Chi phi bua an: " << paid << '$' << endl;
  cout << "So tien thue: " << tax << '$' << endl;
  cout << "So tien tip: " << tip << '$' << endl;
  cout << "Tong hoa don: "<< setprecision(7) << paid + tax + tip<< '$' << endl;
  return 0;
}