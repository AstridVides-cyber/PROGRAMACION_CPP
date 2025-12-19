//Ejercicio de estructuras if, if-else y else-if en C++
#include <iostream>
using namespace std;

int main() {

   // Variables 
    int nota;
    char continuar;
    
    cout << "=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "Ingrese la nota del estudiante (0-100): ";
    cin >> nota;

    // EJEMPLO 1: if simple
    if (nota < 0 || nota > 100) {
        cout << "\nError: La nota debe estar entre 0 y 100" << endl;
        return 1;
    }

    /*
    // EJEMPLO 2: if con else if (múltiples condiciones)
    cout << "\n--- Calificacion obtenida ---" << endl;
    if (nota >= 90) {
        cout << "Excelente (A)" << endl;
    } else if (nota >= 80) {
        cout << "Muy bueno (B)" << endl;
    } else if (nota >= 70) {
        cout << "Bueno (C)" << endl;
    } else if (nota >= 60) {
        cout << "Suficiente (D)" << endl;
    } else {
        cout << "Insuficiente (F)" << endl;
    }*/


    /* 
    // EJEMPLO 3: if-else simple
    cout << "\n--- Estado del estudiante ---" << endl;
    if (nota >= 60) {
        cout << "Estado: APROBADO" << endl;
        cout << "¡Felicidades! Has aprobado la materia." << endl;
    } else {
        cout << "Estado: REPROBADO" << endl;
        cout << "Debes estudiar mas para la proxima." << endl;
    }*/


    /*
    // Bonus: if anidado
    cout << "\n--- Analisis adicional ---" << endl;
    if (nota >= 60) {
        if (nota >= 90) {
            cout << "Mencion honorifica otorgada" << endl;
        } else if (nota >= 80) {
            cout << "Buen desempeño academico" << endl;
        } else {
            cout << "Aprobado con nota regular" << endl;
        }
    } else {
        if (nota >= 50) {
            cout << "Estuviste cerca de aprobar" << endl;
        } else {
            cout << "Necesitas mejorar significativamente" << endl;
        }
    }*/
    
    return 0;
}



