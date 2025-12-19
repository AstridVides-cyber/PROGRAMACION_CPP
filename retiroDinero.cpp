#include <iostream>
using namespace std;

int main() {
    //int -> Variables de tipo entero
    //double, float -> Variables de tipo decimal
    //string -> variables que guardan cadenas de texto
    //char -> variables que guardan un solo caracter
    //bool -> variables que guardan valores logicos (true o false)
    int cantidad, total = 1000;
    cout << "Ingrese la cantidad de dinero a retirar: ";
    cin >> cantidad;

    if(cantidad <= total) {
        total -= cantidad; // equivalente a total = total - cantidad
        cout << "Retiro exitoso. Su nuevo saldo es: " << total << endl;
    } else {
        cout << "Saldo insuficiente." << endl;
    }

    return 0;
}

/*
if-else
Operadores de comparación comunes:
    == igual a
    != diferente de
    > mayor que
    < menor que
    >= mayor o igual que
    <= menor o igual que
    && AND lógico
    || OR lógico
    ! NOT lógico
*/