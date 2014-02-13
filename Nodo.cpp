#include <iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(int num)
{
    this->num = num;
    siguiente = NULL;
}

Nodo::~Nodo()
{
    //dtor
}
