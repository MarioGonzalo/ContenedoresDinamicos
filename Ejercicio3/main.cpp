#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int num = 1;
    bool mas = true;

    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};


    while(mas){
        std::cout << "Ingrese un número: ";
        std::cin >> num;
        numeros.push_back(num);
        std::cout << "¿Desea ingresar otro número? (1: Sí, 0: No): ";
        std::cin >> mas;
    }

    std::sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;

    return 0;
}