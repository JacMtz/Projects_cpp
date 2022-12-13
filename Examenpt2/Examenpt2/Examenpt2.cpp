/* A partir del código de Pet(2.4p)
a.Crear una nueva necesidad(sólo una) con su respectiva función para
contrarrestar.(Vejiga - Sacarlo a pasear, Salud - Dar medicina, etc).

b.Crear una opción en el menú para :
Mostrar un listado de las necesidades de la mascota con su respectivo
nivel.
Ejemplo
Salud : 30
Boredom : 2
Hunger : 1

c.Cuando seleccionemos la opción "Escucha a tu mascota"
Determinar la necesidad específica
Ejemplo
Estoy hambriento(if hunger < 10)
    Estoy aburrido
    Quiero ir al baño.
    Si no tiene ninguna necesidad imprimir : "Estoy muy feliz"
*/

/* d.Implementar que tu mascota muera si no la cuidas.
    Para que suceda esto, todos los niveles de cada una de las
    necesidades deben estar en 0.*/

#include <iostream>
#include "Pet.h"
using namespace std;

int main()
{

    Pet pet;
    pet.Talk();
    int choice;
    bool damaged = false; 

    do {
        cout << "\n Mascotas Virtuales\n\n";

        cout << "Salud: "<< pet.GetHealth() <<"\n";
        cout << "Comida: " << pet.GetFood() << "\n";
        cout << "Diversion: " << pet.GetFun() << "\n";

        cout << "0 -  Salir\n";
        cout << "1 -  Escucha a tu macota\n";
        cout << "2 -  Alimentar\n";
        cout << "3 -  Jugar con mascota\n";
        if (pet.GetHealth() < 15)
        {
            damaged = true;
            cout << "4 -  Curar mascota\n";
        }
        cout << "Elige una opcion: \n";

        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Vuelve pronto!. \n";
            break;
        case 1:
            pet.Talk();
            break;
        case 2:
            pet.Eat();
            break;
        case 3:
            pet.Play();
            break;
        case 4: 
            if (damaged == true)
            {
                pet.Heal();
                break;
            }
            else
            {
                cout << "\nTu elección se inválida. \n";
            }
           

        default:
            cout << "\nTu elección se inválida. \n";
        }

        if (pet.Death() == true)
        {
            cout << "\n La mascota esta con DIOS\n";
            break;
        }

    } while (choice != 0);
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
