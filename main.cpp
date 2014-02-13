#include <iostream>
#include "Lista.h"
#include "ListaDoble.h"

using namespace std;

int main()
{
    ListaDoble l;
    l.agregarNodo(new NodoDoble(1));
    l.agregarNodo(new NodoDoble(2));
    l.agregarNodo(new NodoDoble(3));
    l.agregarNodo(new NodoDoble(0), 0);
    l.agregarNodo(new NodoDoble(4), 4);
    l.imprimir();


    return 0;
}
