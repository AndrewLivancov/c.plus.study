#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  string food  ="Pizza";
  string &meal = food;
  cout << food << "\n";
  cout << meal << "\n";
  cout << &food << "\n";
  return 0;
}
