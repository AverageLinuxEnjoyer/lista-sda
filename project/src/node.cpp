#include "../include/node.hpp"

template<class T>
Node<T>::Node(T info_)
    : info(info_),
      next()
{
    
}

template class Node<int>;