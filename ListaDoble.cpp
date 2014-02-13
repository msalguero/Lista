#include "ListaDoble.h"
#include <iostream>

using namespace std;

ListaDoble::ListaDoble()
{
    inicio = NULL;
}

ListaDoble::~ListaDoble()
{
    //dtor
}

void ListaDoble::imprimir()
{
    for(NodoDoble* temp = inicio; temp!= NULL; temp = temp->sig)
        cout << temp->num<<endl;
}
void ListaDoble::agregarNodo(NodoDoble* n)
{
    if(inicio == NULL)
        inicio = n;
    else
    {
        NodoDoble* temp;
        for(temp = inicio; temp->sig!=NULL; temp = temp->sig);
        temp->sig=n;
        n->ant = temp;
    }
}

void ListaDoble::borrarUltimo()
{
    NodoDoble* temp;

    for(temp = inicio; temp->sig != NULL; temp = temp->sig);
    delete temp->sig;
    temp->sig =NULL;
}

void ListaDoble::agregarNodo(NodoDoble* n, int pos)
{
    if(inicio == NULL)
        inicio = n;

    NodoDoble* temp = inicio;
    if(pos == 0)
    {
        n->sig = inicio;
        inicio = n;
        temp->ant = inicio;
        return ;
    }
    for(int i=0; i<pos-1; i++)
    {
        temp = temp->sig;
        if(temp == NULL)
            return;
    }
    if(temp->sig != NULL)
        temp->sig->ant = n;
    n->sig = temp->sig;
    n->ant = temp;
    temp->sig = n;
}

void ListaDoble::borrarNodo(int pos)
{
    if(inicio == NULL)
        return;
    NodoDoble* temp = inicio;
    if(pos == 0)
    {
        temp = inicio->sig;
        delete inicio;
        inicio = temp;
        inicio->ant = NULL;
    }
    for(int i=0; i<pos; i++)
    {
        temp = temp->sig;
        if(temp == NULL)
            return;
    }
    if(temp->sig != NULL)
        temp->sig->ant = temp->ant;
    temp->ant->sig = temp->sig;
    delete temp;
}
