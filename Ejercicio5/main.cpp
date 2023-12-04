#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

int main() {
    auto cuadrado = [](int num) { return num * num; }; // Funcion lambda que calcula el cuadrado de un numero

    // Funcion lambda que pide un numero y muestra su cuadrado
    cout << "Introduce un numero: ";
    int num;
    cin >> num;
    cout << "Su cuadrado es: " << cuadrado(num) << endl;

    // Uso del for_each con una funcion lambda para mostrar los elementos de un vector
    vector<int> numeros = {1, 2, 3, 4, 5};
    for_each(numeros.begin(), numeros.end(), [](int num) {
        cout << num << endl;
    });

    // Uso de punteros inteligentes
    shared_ptr<int> ptr(new int(10));
    cout << "Valor apuntado por ptr: " << *ptr << endl;

    return 0;
}
