#include "../include/linked_list.hpp"


template<class T>
Lista<T>::Lista()
    : head(nullptr) 
{}

template<class T>
Lista<T>::~Lista()
{
    Node<T>* current = head;
    Node<T>* next;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
}

template<class T>
void Lista<T>::add(T e) {
    Node<T> *node = new Node<T>(e);
    node->next = nullptr;

    if (head == nullptr) {
        head = node;
    } else {
        Node<T> *aux = head;
        while (aux->next != nullptr) {
            aux = aux->next;
        }
        aux->next = node;
    }
}


template<class T>
void Lista<T>::remove(T e) {
    if (head != nullptr) {
        Node<T> *aux = head;
        Node<T> *prev = nullptr;
        while (aux != nullptr) {
            if (aux->info == e) {
                if (prev == nullptr) {
                    head = aux->next;
                } else {
                    prev->next = aux->next;
                }
                delete aux;
                break;
            }
            prev = aux;
            aux = aux->next;
        }
    }
}

template<class T>
bool Lista<T>::search(T e) {
    if (head != nullptr) {
        Node<T> *aux = head;
        while (aux != nullptr) {
            if (aux->info == e) {
                return true;
            }
            aux = aux->next;
        }
    }
    return false;
}

template<class T>
T Lista<T>::get(int index) {
    if (head != nullptr) {
        Node<T> *aux = head;
        int i = 0;
        while (aux != nullptr) {
            if (i == index) {
                return aux->info;
            }
            i++;
            aux = aux->next;
        }
    }
}

template class Lista<int>;