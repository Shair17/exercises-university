/**
 * Determinar la cantidad semanal de dinero que recibirá cada uno
 * de los n obreros de una empresa.
 * Se sabe que cuando las horas que trabajo un obrero exceden de 40,
 * el resto se convierte en horas extras que se pagan al doble de
 * una hora normal, cuando no exceden de 8; cuando las horas extras
 * exceden de 8 se pagan las primeras 8 al doble de lo que se paga
 * por una hora normal y el resto al triple.
*/

#include <iostream>

using namespace std;

int main() {
  float sueldo, horas, pago = 0;
  int nTrabajadores, i = 1;

  cout << "Ingrese el sueldo por hora: ";
  cin >> sueldo;

  cout << "Ingrese el número de trabajadores: ";
  cin >> nTrabajadores;

  while (i <= nTrabajadores) {
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;

    if (horas <= 40) {
      pago = horas * sueldo;
      cout << "Sueldo total " << pago << endl;
    } else {
      if (horas > 40 && horas < 80) {
        sueldo *= 2;
        pago = horas * sueldo;
        cout << "Sueldo total " << pago << endl;
      } else {
        if (horas >= 80) {
          sueldo *= 3;
          pago = horas * sueldo;
          cout << "Sueldo total " << pago << endl;
        }
      }
    }

    i++;
  }

  return 0;
}
