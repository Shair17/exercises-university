#include <iostream>

using namespace std;

int main() {
  int year;
  bool isLeap;

  cout << "Ingresa un año: ";
  cin >> year;

  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) isLeap = true;
  else isLeap = false;

  cout << year << (isLeap ? " es bisiesto" : " no es bisiesto") << endl;

  return 0;
}