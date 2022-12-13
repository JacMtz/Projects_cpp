/* Leer 8 números, almacenarlos en un vector y determinar en qué posiciones
se encuentra el número con mayor cantidad de dígitos pares. Utilizar
funciones con punteros. (1.6p)
*/


#include <iostream>
#include <vector>

using namespace std;

int Pares(vector<string>* const pVec, int i);

int main()
{
    int num, opt;
    int par = 0;
    vector<int> vec;

Inicio:

    for (int i = 0; i < 8; i++)
    {
        do
        {
            cout << "Ingresa un numero para determinar si tiene tres digitos: " << endl;
            cin >> num;

        } while (num < 0 || num > 10000);

        vec.push_back(num);
    }

    int aux;

    if (Pares(&vec, 0) < (Pares(&vec, 1) || Pares(&vec, 2) || Pares(&vec, 3)|| Pares(&vec, 4) || Pares(&vec, 5) || Pares(&vec, 6) || Pares(&vec, 7)))
    {
        cout << Pares(&vec, 0);
    }
   
   
}

int Pares(vector<int>* const pVec, int i)
{ 
    int a, b, c;

    int par = 0;

   
    a = ((*pVec)[i] % 1000 / 100);
    b = ((*pVec)[i] % 100 / 10);
    c = ((*pVec)[i] % 10 / 1);

    if ((a % 2 == 0) && a != 0)
    {
        par++;
    }
    if ((b % 2 == 0) && b != 0)
    {
        par++;
    }
    if ((c % 2 == 0) && c != 0)
    {
        par++;
    }

    return par;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
