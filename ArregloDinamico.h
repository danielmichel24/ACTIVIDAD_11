#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H

#include <iostream>
using namespace std;
class ArregloDinamico
{
    string *arregloD;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;
    public:
    ArregloDinamico();
    ~ArregloDinamico();
    //void insertar_final(int v);
    //void insertar_inicio(int v);
    void insertarInicio(const string &s);
    void insertarFinal(const string &s);
    size_t size();

    string operator[](size_t p)
    {
        return arregloD[p];
    }
private:
    void expandir();
};

#endif

