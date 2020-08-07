/**
 * Calcular la utilidad que un trabajador recibe en el reparto anual de utilidades si este
 * se le asigna como un porcentaje de su salario mensual que depende de su antigüedad
 * en la empresa de acuerdo con la siguiente tabla:
 *      Tiempo                                Utilidad
 *  Menos de 1 año                        5% del salario
 *  1 año o más y menos de 2 años         7% del salario
 *  2 años o más y menos de 5 años        10% del salario
 *  5 años o más y menos de 10 años       15% del salario
 *  10 años o más                         20% del salario
*/

#include "iostream"

using namespace std;

int main() {
  float porcentajes[5] = { .05, .07, .1, .15, .2 };
  float salario, years, utilidad;

  cout << "Ingrese la antigüedad en años (0.1 para referise a enero y así...): ";
  cin >> years;

  cout << "Ingrese su salario mensual: ";
  cin >> salario;

  if (years < 1) utilidad = salario * porcentajes[0];
  else if (years >= 1 && years < 2) utilidad = salario * porcentajes[1];
  else if (years >= 2 && years < 5) utilidad = salario * porcentajes[2];
  else if (years >= 5 && years < 10) utilidad = salario * porcentajes[3];
  else utilidad = salario * porcentajes[4];

  utilidad += salario;

  cout << "La utilidad es: " << utilidad << endl;

  return 0;
}
