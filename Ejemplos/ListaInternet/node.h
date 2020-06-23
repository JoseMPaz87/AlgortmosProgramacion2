#ifndef NODE_H
#define NODE_H
 
#include <iostream>
 
using namespace std;
 
template <class T>
 
class Node
{
    public:
        Node();
        Node(T);
        ~Node();
 
        Node *next;
        T data;
 
        void delete_all();
        void print();
};
 
// Constructor por defecto
template<typename T>
 
Node<T>::Node()
{
    data = NULL;
    next = NULL;
}
 
// Constructor por parámetro
template<typename T>
Node<T>::Node(T data_)
{
    data = data_;
    next = NULL;
}
 
// Eliminar todos los Nodos
template<typename T>
void Node<T>::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}
 
// Imprimir un Nodo
template<typename T>
void Node<T>::print()
{
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << data << "-> ";
}
 
template<typename T>
Node<T>::~Node() {}

#endif // NODE_H
