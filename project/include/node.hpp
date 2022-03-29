#ifndef NODE_HPP
#define NODE_HPP

template<class T>
class Lista;

template<class T>
struct Node {
private:
    T info;
    Node<T>* next;
public:
    Node<T>(T info_);
    friend class Lista<T>;
};




#endif // NODE_HPP
