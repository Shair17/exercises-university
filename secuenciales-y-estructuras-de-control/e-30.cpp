/**
 * Se desea reforestar un bosque que mide determinado número de hectáreas. Si la superficie del terreno excede a 1 millón de metros cuadrados, entonces decidirá sembrar de la siguiente manera:
 * Porcentaje de la superficie del bosque Tipo de árbol
 * 70% pino
 * 20% oyamel
 * 10% cedro
 * Si la superficie del terreno es menor o igual a un millón de metros cuadrados, entonces decidirá sembrar de la siguiente manera:
 * Porcentaje de la superficie del bosque Tipo de árbol
 * 50% pino
 * 30% oyamel
 * 20% cedro
 * Se desea saber el numero de pinos, oyameles y cedros que tendrá que sembrar en el bosque, si se sabe que en 10 metros cuadrados caben 8 pinos, en 15 metros cuadrados caben 15 oyameles y en 18 metros cuadrados caben 10 cedros. También se sabe que una hectárea equivale a 10 mil metros cuadrados.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
  float hectareas, metrosCuadrados, pinos, oyamel, cedro;
  const int VALOR_HECTAREA = 10000;
  const int SUPERFICIE_TERRENO_LIMITE = 1000000;

  const float PORCENTAJE_PINO_EX_MILLON = .7, PORCENTAJE_OYAMEL_EX_MILLON = .2, PORCENTAJE_CEDRO_EX_MILLON = .1;
  const float PORCENTAJE_PINO = .5, PORCENTAJE_OYAMEL = .3, PORCENTAJE_CEDRO = .2;

  cout << "Ingrese las hectareas: ";
  cin >> hectareas;

  metrosCuadrados = hectareas * VALOR_HECTAREA;

  if (metrosCuadrados > SUPERFICIE_TERRENO_LIMITE) {
    pinos = metrosCuadrados * PORCENTAJE_PINO_EX_MILLON;
    oyamel = metrosCuadrados * PORCENTAJE_OYAMEL_EX_MILLON;
    cedro = metrosCuadrados * PORCENTAJE_CEDRO_EX_MILLON;
  } else {
    pinos = metrosCuadrados * PORCENTAJE_PINO;
    oyamel = metrosCuadrados * PORCENTAJE_OYAMEL;
    cedro = metrosCuadrados * PORCENTAJE_CEDRO;
  }

  pinos = trunc(metrosCuadrados / 10 * 8);
  oyamel = trunc(metrosCuadrados / 15 * 10);
  cedro = trunc(metrosCuadrados / 18 * 10);

  cout << "Valor de cedro: " << cedro;
  cout << "Valor de metros cuadrados: " << metrosCuadrados;
  cout << "Valor de oyamel: " << oyamel;
  cout << "Valor de pinos: " << pinos;

  return 0;
}
