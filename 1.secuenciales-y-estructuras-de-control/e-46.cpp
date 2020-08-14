/**
 * Calcular el promedio de un alumno que tiene 7 calificaciones en la materia
 * de Diseño Estructurado de Algoritmos
*/

#include "iostream"

using namespace std;

int main() {
  int min = 1;
  int max = 7;
  float calificacion, sum = 0, promedio;

  while (min <= max) {
    cout << "Ingrese la calificación " << min << ": ";
    cin >> calificacion;

    sum += calificacion;

    min++;
  }

  // trunc() ?
  promedio = sum / max;

  cout << "Promedio " << promedio;

  return 0;
}
