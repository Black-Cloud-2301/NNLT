#include <iostream>
using namespace std;

// Quãng đường trên mỗi bình xăng
int main(){
  int maxGallon = 20;
  float eachGallonInCity = 23.5;
  float eachGallonOutCity = 28.9;
  float totalMilesInCity = maxGallon * eachGallonInCity;
  float totalMilesOutCity = maxGallon * eachGallonOutCity;


  cout << "Khi di chuyen tren thi tran: " << totalMilesInCity << " mile" << endl;
  cout << "Khi di chuyen tren cao toc: " << totalMilesOutCity << " mile" << endl;
  return 0;
}