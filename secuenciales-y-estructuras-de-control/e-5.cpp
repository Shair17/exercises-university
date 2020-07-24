/**
 * Un maestro desea saber que porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.
*/

#include<iostream>

using namespace std;

int main() {
  int cantidadHombres, cantidadMujeres, porcentajeHombres, porcentajeMujeres, total;

  cout << "Ingrese la cantidad de hombres que hay en el grupo: ";
  cin >> cantidadHombres;

  cout << "Ingrese la cantidad de mujeres que hay en el grupo: ";
  cin >> cantidadMujeres;

  if (cantidadMujeres && cantidadHombres) {
    total = cantidadHombres + cantidadMujeres;
    porcentajeHombres = cantidadHombres * 100 / total;
    porcentajeMujeres = cantidadMujeres * 100 / total;

    cout << "Porcentaje de hombres: " << porcentajeHombres;
    cout << "Porcentaje de mujeres: " << porcentajeMujeres;
  } else {
    cout << "ingresa los datos payasito :v";
  }

  return 0;
}



