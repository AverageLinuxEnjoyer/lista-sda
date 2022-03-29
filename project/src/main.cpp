#include <iostream>

#include "../include/linked_list.hpp"

int main() {
    Lista<int> lista;
    lista.add(34);
    lista.add(21);
    std::cout << lista.search(21) << std::endl;
    std::cout << lista.search(44) << std::endl;
    std::cout << lista.get(1) << std::endl;
    lista.remove(34);
    std::cout << lista.get(0) << std::endl;

    return 0;
}