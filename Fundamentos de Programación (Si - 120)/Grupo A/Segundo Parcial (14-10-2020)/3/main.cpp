/*
3. [25 puntos]
A partir de la secuecia de números Fibonacci que es 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc.
La reproducción de conejos es medida por semana (7 días), es decir la primera es 1; la segunda es 2; la tercera es 3; la cuarta es 5; y así sucesivamente...
hacer un programa para calcular lo siguiente: 

------------ MENU ---------

a. Generar secuencia de reproducción de conejos a un cierto día D.
b. Calcular el promedio diario de reproducción de conejos a un cierto día D.
c. Total de conejos a cierto día D.
d. Fin
*/

#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else if (n > 1) {
        return fib(n - 1) + fib(n - 2);
    }
    else {
        return 0;
    }
}

int func(int day, string opt = "") {
    cout << "[";
    for (int i = 0, sum = 0, n = day / 7; i <= n; i++, sum += fib(i)) {
        cout << "day (" << i * 7 << ") = "<< fib(i);
        if (i == n) {
            cout << "]" << endl;
            if (opt == "b") {
                cout << "average = " << float(sum) / day << endl;
            }
            else if (opt == "c") {
                cout << "sum = " << sum << endl;
            }
        }
        else if (i <= n - 1) {
            cout << ", ";
        }
    }
    return fib(day / 7);
}

int main() {
    string opt = "-1";
    while (opt != "d") {
        cout << "a. Generar secuencia de reproducción de conejos a un cierto día D.\nb. Calcular el promedio diario de reproducción de conejos a un cierto día D.\nc. Total de conejos a cierto día D.\nd. Fin" << endl;
        cout << "Opción: "; cin >> opt;
        if (opt == "d") {
            opt;
        }
        else if (opt == "a") {
            int day;
            cout << "day: "; cin >> day;
            func(day);  
        }
        else if (opt == "b") {
            int day;
            cout << "day: "; cin >> day;
            func(day, opt);
        }
        else if (opt == "c") {
            int day;
            cout << "day: "; cin >> day;
            func(day, opt);
        }
    }

    return 0;
}