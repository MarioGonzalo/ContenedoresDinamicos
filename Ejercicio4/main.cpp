#include <iostream>
#include <valarray>

using namespace std;

int main() {
    valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};
    for (double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    cout << "Suma: " << valores.sum() << endl;
    cout << "Media: " << valores.sum() / valores.size() << endl;
    cout << "Minimo: " << valores.min() << endl;
    cout << "Maximo: " << valores.max() << endl;

    valores *= 2.0;

    cout << "Valores * 2: ";
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    valores /= 4.0;

    cout << "Valores / 2: ";
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;
    valores *= 2.0;


    valores -= 1.0;

    cout << "Valores - 1: ";
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    valores += 6.0;

    cout << "Valores + 5: ";
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    return 0;
}