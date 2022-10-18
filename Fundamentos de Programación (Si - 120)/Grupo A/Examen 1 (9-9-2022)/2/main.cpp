/*
2. Un supermercado va a implementar una política de descuentos a sus clientes de acuerdo con el monto de sus compras, de la siguiente forma:

Compras:            Descuento: 
0 a 500bs           0%
501 a 1000bs        5%
1001 a 2000bs       10%
2001 en adelante    20%

Al finalizar imprime el descuento y el total a pagar.
*/

#include <iostream>

using namespace std;
int main() {
    int monto;
    cout << "Monto a pagar: "; cin >> monto;
    if (monto >= 0) {
        if (monto <= 500) {
            cout << "Descuento de 0%" << endl;
        }
    }

    return 0;
}