#include <iostream>
using namespace std;

int main() {
    /*
    // EJEMPLO 1: Menú de opciones básico
    cout << "=== Menu de Opciones ===" << endl;
    int opcion;
    
    cout << "Selecciona una opcion (1-4): " << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cin >> opcion;
    
    // El switch evalúa la variable 'opcion'
    switch(opcion) {
        case 1: // Si la opcion es 1
            cout << "Elegiste SUMAR" << endl;
            break; // break es importante para salir del switch
            
        case 2: // Si la opcion es 2
            cout << "Elegiste RESTAR" << endl;
            break;
            
        case 3: // Si la opcion es 3
            cout << "Elegiste MULTIPLICAR" << endl;
            break;
            
        case 4: // Si la opcion es 4
            cout << "Elegiste DIVIDIR" << endl;
            break;
            
        default: // Se ejecuta si ningún case coincide
            cout << "Opcion invalida" << endl;
            break;
    }
    
  
    
    // EJEMPLO 2: Switch con caracteres (días de la semana)
    cout << "=== Dias de la Semana ===" << endl;
    char dia;
    
    cout << "Ingresa la inicial del dia (L, M, X, J, V, S, D): ";
    cin >> dia;
    
    // Switch también funciona con caracteres
    switch(dia) {
        case 'L':
        case 'l': // Puedes tener múltiples cases para el mismo código
            cout << "Lunes - Inicio de semana" << endl;
            break;
            
        case 'M':
        case 'm':
            cout << "Martes" << endl;
            break;
            
        case 'X':
        case 'x':
            cout << "Miercoles" << endl;
            break;
            
        case 'J':
        case 'j':
            cout << "Jueves" << endl;
            break;
            
        case 'V':
        case 'v':
            cout << "Viernes - Casi fin de semana!" << endl;
            break;
            
        case 'S':
        case 's':
        case 'D':
        case 'd':
            cout << "Fin de semana!" << endl;
            break;
            
        default:
            cout << "Dia no valido" << endl;
    }

   */
    
    // EJEMPLO 3: Switch con operaciones matemáticas
    cout << "=== Calculadora Simple ===" << endl;
    double num1, num2, resultado;
    char operador;
    
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "Ingresa el operador (+, -, *, /): ";
    cin >> operador;
    
    
    // Switch para determinar qué operación realizar
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
            break;
            
        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
            break;
            
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
            break;
            
        case '/':
            // Validación para evitar división por cero
            if(num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero" << endl;
            }
            break;
            
        default:
            cout << "Operador invalido" << endl;
    }
    
    return 0;
}

    

/* 
PUNTOS IMPORTANTES SOBRE SWITCH:

1. BREAK: Es crucial usar 'break' al final de cada caso.
   Sin break, el código continuará ejecutándose en los siguientes casos
   (esto se llama "fall-through").

2. DEFAULT: Es opcional pero recomendado. Se ejecuta cuando ningún
   case coincide con el valor evaluado.

3. TIPOS DE DATOS: Switch funciona con:
   - Enteros (int, short, long)
   - Caracteres (char)
   - Enumeraciones (enum)
   NO funciona directamente con strings o floats/doubles

4. MULTIPLES CASES: Puedes tener varios cases que ejecuten el mismo código
   poniéndolos uno tras otro sin break entre ellos.

5. VENTAJA vs IF-ELSE: Switch es más legible cuando tienes múltiples
   condiciones que evalúan la misma variable contra valores específicos.
*/