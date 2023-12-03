#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};
    bool anadir = true;
    while (anadir){
        cout << "Introduzca un numero: ";
        int numero;
        cin >> numero;
        numeros.push_back(numero);
        cout << "¿Desea añadir otro numero? (1 = si, 0 = no): ";
        cin >> anadir;
    }
    for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}