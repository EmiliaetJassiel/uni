/*
4. [25 puntos]
Elaborar un programa en C++, para realizar un menú de opciones basada en la ley de Ohm. En la opción 3 debe leer la intensidad de corriente (I) para obtener el voltaje (V), tomando en cuenta el valor de la cuenta R(t) calculado anteriormente.
1. Resistencia en serie                     R(t) = R(1) + R(2) + r(3) + ... + R(n)
2. Resistencian en paralelo                 I / R(t) = I / R(1) + I / R(2) + I / R(3) + ... + I / R(n)
3. Voltaje                                  V = R(t) * I
4. Continuar si hay más datos
--------------------------------
Respuesta:
NOTA: Cada una de las opciones, debe llamar a su respectivo subprograma que obtiene el resultado de dicha fórmula.
*/
#include <iostream>

using namespace std;

float resistenciaTotal(int opt = 0) {
    int n;
    cout << "Cantidad de resistencias: "; cin >> n;
    float total = 0;
    for (int i = 1, resistencia; i <= n; i++, float(resistencia), total += resistencia) {
        cout << "Resistencia(" << i << ") = "; cin >> resistencia;
    }
    if (opt == 0) {
        return total;
    }
    else if (opt == 2 || opt == 3) {
        float I;
        cout << "Corriente: "; cin >> I;
        if (opt == 2) {
            return I / total;
        }
        else if (opt == 3) {
            return total * I;
        }
    }
    return 0;
}

int main() {
    int opt = -1;
    while (opt != 0) {
        cout << "1. Resistencia en serie\n2. Resistencia en paralelo\n3. Voltaje\n4. Continuar si hay más datos" << endl;
        cin >> opt;
        if (opt == 4) {
            opt = 0;
        }
        else if (opt == 1) {
            cout << resistenciaTotal() << endl;
        }
        else if (opt == 2) {
            cout << resistenciaTotal(opt) << endl;
        }
        else if (opt == 3) {
            cout << resistenciaTotal(opt) << endl;
        }
    }

    return 0;
}