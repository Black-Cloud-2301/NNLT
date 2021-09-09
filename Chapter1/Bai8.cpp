#include <iostream>
using namespace std;

//Tổng tiền mua hàng
int main(){
  float firstItem = 15.59, secondItem = 24.59, thirthItem = 6.59, fourthItem = 12.59, fifthItem = 3.59;
  float sum = firstItem + secondItem + thirthItem + fourthItem + fifthItem;
  float tax = 0.07 * sum;
  float total = sum + tax;

  cout << "Mon do thu nhat: " << firstItem << '$' << endl;
  cout << "Mon do thu hai: " << secondItem << '$' << endl;
  cout << "Mon do thu ba: " << thirthItem << '$' << endl;
  cout << "Mon do thu tu: " << fourthItem << '$' << endl;
  cout << "Mon do thu nam: " << fifthItem << '$' << endl;
  cout << "Tong tam tinh: " << sum << '$' << endl;
  cout << "Thue: " << tax << '$' << endl;
  cout << "Tong phai tra: " << total << '$' << endl;

  return 0;
}