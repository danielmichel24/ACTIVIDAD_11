#include <iostream>
#include "arreglo.h"
#include "ArregloDinamico.h"

using namespace std;


void modificar(int *a)
{
    *a = *a + 1;
}

int main()
{
    ArregloDinamico arregloD;
    arregloD.insertarFinal("DANIEL");
    arregloD.insertarFinal("MICHEL");
    arregloD.insertarFinal("NERI");
    arregloD.insertarFinal("GUTIERREZ");
    arregloD.insertarFinal("KATIA");
    arregloD.insertarFinal("JANETH");
    arregloD.insertarFinal("HUTHOFF");
    arregloD.insertarFinal("LECHUGA");

    arregloD.insertarInicio("JORGE");
    arregloD.insertarInicio("LUIS");
    for (size_t i = 0; i < arregloD.size(); i++)
    {
        cout << arregloD[i] << " ";
    }
    



    return 0;
}