#include "Lista.h"

Lista::Lista()
{
    inicio = NULL;
}

Lista::~Lista()
{
    //dtor
}

void Lista::agregarNodo(Nodo* n)
{
    if(inicio == NULL)
    {
        inicio = n;
    }else
    {
        Nodo* tmp;
        for(tmp = inicio; tmp->siguiente != NULL; tmp = tmp->siguiente)
            ;
        tmp->siguiente = n;
    }
}

void Lista::imprimir()
{
    for(Nodo* temp = inicio; temp!= NULL; temp = temp->siguiente)
        cout << temp->num<<endl;
}

void Lista::borrarUltimo()
{
     if(inicio == NULL)
     {
         return ;
     }else if(inicio->siguiente == NULL)
     {
         delete inicio;
         inicio = NULL;
         return;
     }
     Nodo * tmp;
     for(tmp = inicio; tmp->siguiente->siguiente != NULL; tmp = tmp->siguiente);
        delete tmp->siguiente;
        tmp->siguiente = NULL;
}

void Lista::agregarNodo(Nodo* n, int pos)
{

    if(pos == 0){
         if(inicio == NULL)
        {
            inicio = n;
            return;
        }else
        {
            n->siguiente = inicio;
            inicio = n;
            return;
        }
    }
        Nodo* tmp;
        int i = 0;
        for(tmp = inicio; tmp != NULL; tmp = tmp->siguiente)
           {
           if(i == pos-1)
            {
                n->siguiente = tmp->siguiente;
                tmp->siguiente = n;
            }
            i++;
            }


}

void Lista::borrarNodo(int pos)
{
    if(pos == 0)
    {
        Nodo* tmp = inicio;
        inicio = inicio->siguiente;
        delete tmp;
    }
    Nodo* tmp = inicio;
    int i = 0;
    for(tmp = inicio; tmp != NULL && i<pos-1; tmp = tmp->siguiente)
        i++;

    if(tmp!=NULL)
    {
        Nodo*t2 = tmp->siguiente->siguiente;
        delete tmp->siguiente;
        tmp->siguiente = t2;
    }
}
