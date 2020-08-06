/**
 * El IMSS requiere clasificar a las personas que se jubilaran en el año de 1997.
 * Existen tres tipos de jubilaciones: por edad, por antigüedad joven y por antigüedad adulta.
 * 
 *  - Las personas adscritas a la jubilación por edad deben tener 60 años o mas y
 *  una antigüedad en su empleo de menos de 25 años.
 * 
 *  - Las personas adscritas a la jubilación por antigüedad joven deben tener
 *    menos de 60 años y una antigüedad en su empleo de 25 años o mas.
 * 
 *  - Las personas adscritas a la jubilación por antigüedad adulta deben tener
 *    60 años o mas y una antigüedad en su empleo de 25 años o mas.
 * 
 * Determinar en que tipo de jubilación, quedara adscrita una persona.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
  int edad, antiguedad;

  cout << "Ingresa tu edad: ";
  cin >> edad;

  cout << "Ingresa tu antiguedad en el trabajo: ";
  cin >> antiguedad;

  if (edad > 60 && antiguedad < 25) {
    cout << "La jubilación es por edad";
  } else {
    if (edad >= 60 && antiguedad > 25) {
      cout << "La jubilación es por antigüedad adulta";
    } else {
      if (edad < 60 && antiguedad > 25) {
        cout << "La jubilación es por antigüedad joven";
      } else {
        cout << "No se jubila";
      }
    }
  }

  return 0;
}
