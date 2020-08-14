/**
 * Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.
 * Realizar un algoritmo para calcular la calificación media y la calificación mas baja de todo el grupo.
*/

#include<iostream>

using namespace std;

int main() {
  float nota, suma = 0, calificacionMedia, calificacionBaja;
  int index = 1;

  while (index <= 40) {
    cout << "Ingresa nota: ";
    cin >> nota;

    index++;
  }

  return 0;
}
