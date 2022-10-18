/*
1. Tomando como base los resultados obtenidos en un laboratorio de análisis clínico, un médico determina si una persona tiene anemia o no, lo cual depende de su niel de hemoglobina en la sangre (%g), de sus edad y de su sexo.
Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, se determina su resultado como positivo y en caso contrario como negativo.
La  tabla en la que el médico se basa para obtener el resultado es la siguiente: 
Edad:               Nivel hemoglobina:
0 - 1 mes           13.0% - 26.0% g
> 1 y <= 6 meses    10.0% - 18.0% g
> 6 y <= 12 meses   11.0% - 15.0% g
> 1 y <= 5 años     11.5% - 15.0% g
> 5 y <= 10 años    12.6% - 15.5% g
> 10 y <= 15 años   13.0% - 15.5% g

Rango válido para hombres y mujeres
Mujeres > 15 años       12.0% - 16.0% g
Hombres > 15 años       14.0% - 18.0% g
*/

#include <iostream>

using namespace std;

bool anemia(float age, float g, int opt, int sex) {
    if (opt == 0 ) {
        if (age > 1 && age <= 5 && g >= 11.5 && g <= 15) {
            return false;
        }
        else if (age > 5 && age <= 10 && g >= 12.6 && g <= 15.5) {
            return false;
        }
        else if (age > 10 && age <= 15 && g >= 13 && g <= 15.5) {
            return false;
        }
        else if (age > 15) {
            if (sex == 1 && g >= 14 && g <= 18) {
                return false;
            }
            else if (sex == 0 && g >= 12 && g <= 16) {
                return false;
            }
            else {
                return true;
            }
        }
        else {
            return true;
        }
    }
    else if (opt == 1) {
        if (age > 0 && age <= 1 && g >= 13 && g <= 26) {
            return false;
        }
        else if (age > 1 && age <= 6 && g >= 10 && g <= 18) {
            return false;
        }
        else if (age > 6 && age <= 12 && g >= 11 && g <= 15) {
            return false;
        }
    }
    else {
        return true;
    }
}

int main() {
    float mes, año, edad, hemoglobina;
    int opt, sexo = -1;
    cout << "Edad en meses (1) o años (0): "; cin >> opt;
    if (opt == 1) {
        cout << "Meses: "; cin >> mes;
        edad = mes;
    }
    else if (opt == 0) {
        cout << "Años: "; cin >> año;
        edad = año;
        if (edad > 15) {
            cout << "Hombre (1); Mujer (0): "; cin >> sexo;
        }
    }
    cout << "Porcentaje de hemoglobina: "; cin >> hemoglobina;
    if (anemia(edad, hemoglobina, opt, sexo) == true) {
        cout << "Tiene anemia" << endl;
    }
    else if (anemia(edad, hemoglobina, opt, sexo) == false) {
        cout << "No tiene anemia" << endl;
    }

    return 0;
}