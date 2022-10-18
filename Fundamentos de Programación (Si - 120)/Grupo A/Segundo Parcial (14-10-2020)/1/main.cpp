/*
1. [25 puntos] Elaborar un programa en C++, para realizar la suma de los n términos de la serie: 
S = pi - X^n / 1! + X^(n - 1) / 3! - X^(n - 2) / 5! + X^(n - 3) / 7! - ...
NOTA: Dicha sumatoria debe realizarse a través de una función llamada: "suma" que tiene como parámetro la cantidad de terminos de la serie (n) y un valor (X)
*/

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int fact(int n) {
    if (n > 0) {
        return n * fact(n - 1); 
    }
    else {
        return 1;
    }
}

float suma(int n, int X) {
    float suma = M_PI;
    for (int imp = 1, sign = -1,  i = n; i >= 0; i--, n--, imp += 2, sign *= -1) {
        suma +=  pow(X, n) / fact(imp) * sign;
    }

    return suma;
}
int main() {
    cout << suma(2, 3) << endl;
    return 0;
}