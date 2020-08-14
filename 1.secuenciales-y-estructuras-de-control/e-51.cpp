/**
 * Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.
 * Realizar un algoritmo para calcular la calificación media y la calificación mas baja de todo el grupo.
*/

#include<iostream>

using namespace std;

int main() {
  float nota, suma = 0, calificacionMedia, calificacionBaja = 2;
  int index = 1;

  while (index <= 40) {
    cout << "Ingresa nota " << index << " : ";
    cin >> nota;

    suma += nota;

    if (nota > 0 && nota <= 5) {
      if (nota < calificacionBaja) {
        calificacionBaja = nota;
      }
    }

    index++;
  }

  calificacionMedia = suma / 40;

  cout << "La nota media es " << calificacionMedia << endl;
  cout << "La nota más baja es " << calificacionBaja << endl;

  return 0;
}
