#ifndef NODO_H
#define NODO_H


class Nodo
{
    public :
        Nodo* siguiente;
        int num;
        Nodo(int num);
        Nodo();
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H
