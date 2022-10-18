/*
3. Desarrolle un programa en C++ que calcule el precio a pagar por las compras de los clientes si la tienda hace una promoción de descuentos de acuerdo al importe comprado.

f. Importe de compra menor o igual a 1000 descuento del 10%
g. Importe de compra mayor a 1000 descuento del 10%
g. Importe de compra mayor a 5000 descuento del 20%
i. Importe de compra mayor a 10000 descuento del 30%
*/

#include <iostream>

using namespace std;

float descuento(float importe) {
    if (importe >= 0) {
        if (importe <= 5000) {
            return importe * 0.1;
        }
        else if (importe > 5000) {
            if (importe <= 10000) {
                return importe * 0.2;
            }
            else if (importe > 10000) {
                return importe * 0.3;
            }
        }
    }
    return 0;
}

int main() {
    float Importe_comprado;
    cout << "Importe comprado: "; cin >> Importe_comprado;
    cout << "Descuento de: " <<  descuento(Importe_comprado) << endl;
    cout << "Importe a pagar: " << Importe_comprado - descuento(Importe_comprado) << endl;

    return 0;
}