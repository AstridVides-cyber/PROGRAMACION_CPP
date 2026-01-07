// While y do-while
#include <iostream>
using namespace std;

int main() {
/*
// While
cout << "Cuenta regresiva desde 10" << endl;

int regresiva = 10; // Inicializamos en 10

// Mientras regresiva sea mayor que 0
while (regresiva > 0 ){
    cout << regresiva << "... "; 
    regresiva--; // Decrementamos en 1
};

cout << " BOOOOMMMMMMMMM!!!" << endl;
*/

// Do-While
int opcion;
int intento = 0;

do {
    // Mostramos el menú
    cout << "========================================" << endl;
    cout << "Menu de opciones: " << endl;
    cout << "1. Opcion 1" << endl;
    cout << "2. Opcion 2" << endl;
    cout << "3. Salir" << endl;
    cout << "========================================" << endl;
    cout << "Seleccione una opcion (1-3): ";
    cin >> opcion;
    cout << endl;

     if (opcion >= 1 && opcion <= 3) {
            cout << "Opcion valida!" << endl;
            cout << "Has seleccionado la opcion " << opcion << endl;
        } else {
            cout << "Opcion invalida." << endl;
            cout << "Por favor, ingrese un numero entre 1 y 3." << endl << endl;
        }
} while ( opcion < 1 ||opcion > 3 ); // repetir si la opcion es invalida

    cout << endl << "========================================" << endl;
    cout << "Procesando opcion " << opcion << "..." << endl;
    cout << "Gracias por usar el programa!" << endl;
    cout << "========================================" << endl;
    

return 0;
};

    // ============================================
    // ¿QUÉ ES EL CICLO WHILE?
    // ============================================
    
    // El ciclo WHILE (mientras) es una estructura de control repetitiva
    // que ejecuta un bloque de código MIENTRAS una condición sea verdadera
    
    // CARACTERÍSTICA PRINCIPAL:
    // - Evalúa la condición ANTES de ejecutar el código
    // - Si la condición es falsa desde el inicio, el código NUNCA se ejecuta
    
    // SINTAXIS:
    // while (condición) {
    //     código a ejecutar
    // }

    // ============================================
    // ¿QUÉ ES EL CICLO DO-WHILE?
    // ============================================
    
    // El ciclo DO-WHILE (hacer-mientras) es una estructura de control repetitiva
    // que ejecuta un bloque de código y DESPUÉS evalúa la condición
    
    // CARACTERÍSTICA PRINCIPAL:
    // - Ejecuta el código PRIMERO, evalúa la condición DESPUÉS
    // - Se garantiza que el código se ejecute AL MENOS UNA VEZ
    // - Incluso si la condición es falsa, el código se ejecuta una vez
    
    // SINTAXIS:
    // do {
    //     código a ejecutar
    // } while (condición);  // ¡Nota el punto y coma al final!
    


