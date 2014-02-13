#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "NodoDoble.h"

class ListaDoble
{
    public:
        NodoDoble*inicio;
        ListaDoble();
        virtual ~ListaDoble();

        void imprimir();
        void agregarNodo(NodoDoble* n);
        void agregarNodo(NodoDoble* n, int pos);
        void borrarUltimo();
        void borrarNodo(int pos);
    protected:
    private:
};

#endif // LISTADOBLE_H
