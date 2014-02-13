#ifndef NODODOBLE_H
#define NODODOBLE_H
#include <iostream>

class NodoDoble
{
    public:
        NodoDoble* sig;
        NodoDoble* ant;
        int num;
        NodoDoble(int num);
        virtual ~NodoDoble();
    protected:
    private:
};

#endif // NODODOBLE_H
