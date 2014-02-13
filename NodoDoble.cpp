#include "NodoDoble.h"

NodoDoble::NodoDoble(int num)
{
    ant = NULL;
    sig = NULL;
    this->num = num;
}

NodoDoble::~NodoDoble()
{
    //dtor
}
