/**
 * Todos los lunes, miércoles y viernes, una persona corre la misma ruta
 * y cronometra los tiempos obtenidos. Determinar el tiempo promedio que
 * la personatarda en recorrer la ruta en una semana cualquiera.
*/

#include<iostream>

using namespace std;

int main() {
  float tiempoLunes, tiempoMartes, tiempoViernes, semana, tiempoTotal, tiempoRecorrido;

  cout << "Ingresa el tiempo del lunes: ";
  cin >> tiempoLunes;

  cout << "Ingresa el tiempo del martes: ";
  cin >> tiempoMartes;

  cout << "Ingresa el tiempo del viernes: ";
  cin >> tiempoViernes;


  cout << "Ingresa la(s) semanas a calcular: ";
  cin >> semana;

  tiempoTotal = tiempoLunes + tiempoMartes + tiempoViernes;

  tiempoRecorrido = tiempoTotal / 3;

  cout << "El tiempo recorrido en las semanas es: " << tiempoRecorrido;

  return 0;
}
