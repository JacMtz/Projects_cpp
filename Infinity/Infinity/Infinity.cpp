// Infinity.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
   setlocale(LC_ALL, ".UTF8");

   int estudiantes;
   int calificación;
   int clase = 0;
   

   cout << "¿Cuantos estdiantes tienes en tu clase? ";
   cin >> estudiantes;

   for (int i = 1; i <= estudiantes; i++)
   {
       cout << "Ingresa la calificación del alumno " << i << endl;
       cin >> calificación;
       clase = (clase + calificación);
       cout << calificación << endl;
       cout << clase << endl;
   }
    
   float promedio = clase / estudiantes;
   cout << "El promedio de la clase es: " << promedio << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
