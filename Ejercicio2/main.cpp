#include <iostream>
#include <list>
#include <stack>

int main() {
    float anadir = 1;
    bool mas = true;
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);
    while (anadir != 0 && mas) {
        std::cout << "Introduzca un numero: ";
        std::cin >> anadir;
        pila.push(anadir);
        std::cout << "¿Desea introducir otro numero? (1 = si, 0 = no): ";
        std::cin >> mas;
    }

    while(!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }

    return 0;
}