#include "ArregloDinamico.h"



ArregloDinamico::ArregloDinamico()
{
    arregloD = new string [MAX];
    cont = 0;
    tam = MAX;
}

ArregloDinamico::~ArregloDinamico()
{
    delete[] arregloD;
}

void ArregloDinamico::insertarFinal(const string &s)
{
    if (cont == tam){
        expandir();
    }
    arregloD[cont] = s;
    cont ++;
}

void ArregloDinamico::insertarInicio(const string &s)
{
   if (cont == tam){
        expandir();
    }
    for (size_t i = cont; i > 0; i--){
        arregloD[i] = arregloD [i-1];
    }
    
    arregloD[0] = s;
    cont++;
}

size_t ArregloDinamico::size()
{
    return cont;
}

void ArregloDinamico::expandir()
{
    string *Dnuevo = new string[tam+MAX];

    for (size_t i = 0; i < cont; i++){
        Dnuevo[i] = arregloD[i];
    }
        delete[] arregloD;
        arregloD = Dnuevo;
        tam = tam + MAX;
    
}