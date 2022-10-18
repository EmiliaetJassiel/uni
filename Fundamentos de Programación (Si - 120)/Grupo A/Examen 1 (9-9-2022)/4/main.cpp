/*
4. La gobernación de Santa Cruz desea reforestar un bosque que mide deterinado número de hectáreas.

Si la superficie del terreno excede a un millón de metros cuadrados, entonces decidirá sembrar de la siguiente manera: 
Porcentaje de la superficie del bosque:     Tipo de árbol:
70%                                         Tajibo
20%                                         Mara
10%                                         Cedro

Si lasuperficie del terreno es menor o igual a un millón de metros cuadrados, entonces decidirá sembrar de la siguiente maenra: 
Porcentaje de la superficie del bosque:     Tipo de árbol:
50%                                         Tajibo
30%                                         Mara
20%                                         Cedro

La gobernación edsea saber el número de Tajibos, Maras y Cedros que tendrá que sembrar en el bosque, si se sabe que en 10 metros cuadrados caben 8 Tajibos, en 15 metros cuadrados caben 15 Maras y en 18 metros cuadrados caben 10 Cedros.
También se sabe que una hectárea equivale a 10 mil metros cuadrados.
*/

#include <iostream>

using namespace std;

void reforestar(float surface) {
    if (surface > 1000000) {
        cout << "Tajibos: " << (surface * 0.7 / 10 * 8) << endl;
        cout << "Maras: " << (surface * 0.2 / 15 * 15) << endl;
        cout << "Cedros: " << (surface * 0.1 / 18 * 10) << endl;
    }
    else if (surface <= 1000000) {
        cout << "Tajibos: "<< (surface * 0.5 / 10 * 8) << endl;
        cout << "Maras: " << (surface * 0.3 / 15 * 15) << endl;
        cout << "Cedros: " << (surface * 0.2 / 18 * 10) << endl;
    }
}

int main() {
    float area;
    cout << "Área: "; cin >> area;
    reforestar(area);
    
    return 0;
}