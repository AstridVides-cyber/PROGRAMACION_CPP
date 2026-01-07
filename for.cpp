#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    // Ejercicio 1: Imprimir números del 1 al 10
    cout << "=== Ejercicio 1: Números del 1 al 10 ===" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    
    // Ejercicio 2: Suma de números del 1 al 100
    cout << "\n=== Ejercicio 2: Suma del 1 al 100 ===" << endl;
    int suma = 0;
    for (int i = 1; i <= 100; i++) {
        suma += i;
    }
    cout << "La suma es: " << suma << endl;

    // Ejercicio 3: Tabla de multiplicar
    cout << "\n=== Ejercicio 3: Tabla del 5 ===" << endl;
    int numero = 5;
    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        cout << numero << " x " << i << " = " << resultado << endl;
    }

    // Ejercicio 4: Recorrer un arreglo
    cout << "\n=== Ejercicio 4: Recorrer arreglo de frutas ===" << endl;
    string frutas[] = {"manzana", "banana", "naranja", "uva", "sandia"};
    int tamano = 5;
    for (int i = 0; i < tamano; i++) {
        cout << "Me gusta la " << frutas[i] << endl;
    }

    // Ejercicio 5: Números pares del 0 al 20
    cout << "\n=== Ejercicio 5: Numeros pares del 0 al 20 ===" << endl;
    for (int i = 0; i <= 20; i += 2) {
        cout << i << " ";
    }
    
    */

    // Ejercicio 6: Patrón de asteriscos
    cout << "\n=== Ejercicio 6: Patron de asteriscos ===" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
       
}