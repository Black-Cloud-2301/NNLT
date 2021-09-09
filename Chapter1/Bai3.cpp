#include <iostream>
using namespace std;

//Thuế bán hàng
int main(){
  float cart = 95;
  float tax = cart / 100 * 4 + cart / 100 * 2;

  cout << tax << endl;
  return 0;
}