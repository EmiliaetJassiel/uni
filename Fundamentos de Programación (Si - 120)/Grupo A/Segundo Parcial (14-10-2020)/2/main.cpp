/*
2. [25 puntos] La serie de cómo se produce el contagio del virus SAR-COV-2, (produce la enfermedad COVID-19), es la siguiente: 

A) 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, ...
El virus se duplica cada 3 días, es decir, el día 1 hay un contagiado, el día 4 hay 2 contagiados, el día 7 son 8, etc., como verán el crecimiento de contagios es exponencial.
Lo que se quiere saber es: 
a. ¿Cuál es el total de contagiados en un día D?
b. ¿Cuál es el promedio de contagios a un determinado día D?

B) Si los contagios siguen una segcuencia de Fibonacci, responda de igaul forma las dos primeras preguntas.
*/

#include <iostream>

using namespace std;

int fib(int x) {
   if (x == 1 || x == 0) {
      return x;
   }
   else {
      return fib(x - 1) * 2;
   }
}

int main() {
    int day;
    cout << "day: "; cin >> day;
    int n = day / 3;
    cout << fib(n) << endl;
    int suma = 0;
    cout << "covid = [";
    for (int i = 1; i <= n; i++) {
        cout << "day (" << i * 3 << ") = "<< fib(i);
        if (i == n) {
            cout << "]" << endl;
        }
        else if (i + 1 <= n) {
            cout << ", ";
        }
        int val = fib(i);
        suma += val;
    }
    cout << endl << "Sum = " << suma << endl;
    cout << "Average = " << float(suma) / day <<endl;

    return 0;
}
