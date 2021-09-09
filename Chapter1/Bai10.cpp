#include <iostream>
using namespace std;

// Số dặm trên mỗi gallon
int main(){
  int maxGallon = 15;
  int maxDistance = 375;
  float eachGallon = maxDistance / maxGallon;
  cout << "So dam tren moi gallon: " << eachGallon << endl;
  return 0;
}