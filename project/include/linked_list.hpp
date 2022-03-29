#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP
#include "node.hpp"

template<class T>
class Lista {
public:
    Lista();
    ~Lista();

    void add(T);
    void remove(T);
    bool search(T);
    T get(int index);

private:
    Node<T>* head;
};





#endif // LINKED_LIST_HPP
