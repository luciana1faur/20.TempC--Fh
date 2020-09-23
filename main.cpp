#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double gradeC;
  double gradeF;

  cout << "Introduceti grade C: ";
  cin >> gradeC;

  gradeF = gradeC * 1.8 + 32;

  cout << "Grade F sunt: " << gradeF << endl;

  return 0;
}