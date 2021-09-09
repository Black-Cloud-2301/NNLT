#include <iostream>
#include <math.h>
using namespace std;

// Bao nhiêu sơn
int main(){
  float area = 6 * 100;
  float numGallon = ceil(area / 340);
  cout << "Luong gallon son can thiet: " << numGallon << endl;
  return 0;
}