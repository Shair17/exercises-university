/**
 * Se desea obtener el promedio de g grupos que están en un mismo año escolar;
 * siendo que cada grupo puede tener n alumnos que cada alumno puede llevar m materias
 * y que en todas las materias se promedian tres calificaciones para obtener
 * el promedio de la materia.
 * Lo que se desea desplegar es el promedio de los grupos,
 * el promedio de cada grupo y el promedio de cada alumno.
*/

#include <iostream>

using namespace std;

int main() {
  int grupos, sumaGrupos, sumaAlumnos, grupo = 1, alumno = 1, numero, materias, sumaMaterias, materia = 1;

  float calificacion1, calificacion2, calificacion3, promedioMateria,
        promedioAlumno, promedioGrupo, promedioTotal;

  cout << "Cuántos grupos son? ";
  cin >> grupos;

  while (grupo <= grupos) {
    cout << "Cuántos alumnos tiene el grupo " << grupo << "? ";
    cin >> numero;

    while (alumno <= numero) {
      cout << "Cuántas materias lleva el alumno " << alumno << "? ";
      cin >> materias;

      while (materia <= materias) {
        cout << "Ingresa la primera calificación de la materia " << materia << ": ";
        cin >> calificacion1;

        cout << "Ingresa la segunda calificación de la materia " << materia << ": ";
        cin >> calificacion2;

        cout << "Ingresa la tercera calificación de la materia " << materia << ": ";
        cin >> calificacion3;

        promedioMateria = (calificacion1 + calificacion2 + calificacion3) / 3;
        cout << "Promedio de esta materia: " << promedioMateria << endl;
        sumaMaterias += promedioMateria;

        materia++;
      }

      promedioAlumno = sumaMaterias / materias;
      cout << "Promedio del alumno " << alumno << " " << promedioAlumno << endl;
      sumaAlumnos += promedioAlumno;

      alumno++;
    }

    promedioGrupo = sumaAlumnos / numero;
    cout << "El promedio del grupo " << grupo << " es " << promedioGrupo << endl;
    sumaGrupos += promedioGrupo;

    grupo++;
  }

  promedioTotal = sumaGrupos / grupos;
  cout << "El promedio de todos los grupos es " << promedioTotal << endl;

  return 0;
}
