#include <iostream>
using namespace std;

int main() {
  string mobil[3][2] = {{"VOLVO", "FORD"}, {"BUGAR","BMW"}, {"MATSUBASHI","SUZUKI"}};
  
  cout << mobil[2][1] << endl;
  
  int i, j;
  
  cout << "baris ke berapa : ";
  cin >> i;
  cout << "ke berapa : ";
  cin >> j;
  for(i; i<3; i++) {
    for(j; j<2; j++) {
      cout << mobil[i][j];
    }
    cout << endl;
  }
  
  return 0;
}
