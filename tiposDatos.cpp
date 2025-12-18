#include <iostream> // Librería para entrada y salida de datos 
using namespace std;

int main() {

    cout << "=== TIPOS DE DATOS EN C++ ===" << endl << endl;

    // ================================================================
    // CHAR: Para guardar un solo carácter o números muy pequeños
    // ================================================================

    cout << "1. CHAR - Carácter o entero pequeño" << endl;
    cout << "   Tamaño: 1 byte" << endl;
    cout << "   Con signo: -128 a 127" << endl;  // Puede ser negativo
    cout << "   Sin signo: 0 a 255" << endl;     // Solo positivo
    char letra = 'A';  // Se usan comillas simples para caracteres
    unsigned char sinSigno = 200;  // unsigned = sin signo (solo positivos)
    cout << "   Ejemplo: char letra = '" << letra << "';" << endl;
    cout << "   Ejemplo: unsigned char = " << (int)sinSigno << endl << endl;

    // =================================================================
    // SHORT: Números enteros pequeños (ahorra memoria)
    // =================================================================
    cout << "2. SHORT - Entero corto" << endl;
    cout << "   Tamaño: 2 bytes" << endl;
    cout << "   Con signo: -32768 a 32767" << endl;
    cout << "   Sin signo: 0 a 65535" << endl;
    short corto = 30000;  // Número entero sin decimales
    unsigned short cortoSinSigno = 60000;  // Solo valores positivos
    cout << "   Ejemplo: short = " << corto << endl;
    cout << "   Ejemplo: unsigned short = " << cortoSinSigno << endl << endl;
  
    // =================================================================
    // INT: El tipo más usado para números enteros
    // =================================================================
    cout << "3. INT - Entero" << endl;
    cout << "   Tamaño: 4 bytes" << endl;
    cout << "   Con signo: -2147483648 a 2147483647" << endl;  // Negativos y positivos
    cout << "   Sin signo: 0 a 4294967295" << endl;
    int entero = 1000000;  // Puede guardar números muy grandes
    unsigned int enteroSinSigno = 3000000000U;  // La U indica unsigned
    cout << "   Ejemplo: int = " << entero << endl;
    cout << "   Ejemplo: unsigned int = " << enteroSinSigno << endl << endl;
    
    // ========================================
    // LONG: Para números enteros MUY grandes
    // ========================================
    cout << "4. LONG - Entero largo" << endl;
    cout << "   Tamaño: 8 bytes" << endl;
    cout << "   Con signo: -2147483648 a 2147483647" << endl;
    cout << "   Sin signo: 0 a 4294967295" << endl;
    long largo = 5000000L;  // La L indica que es tipo long
    unsigned long largoSinSigno = 4000000000UL;  // UL = unsigned long
    cout << "   Ejemplo: long = " << largo << endl;
    cout << "   Ejemplo: unsigned long = " << largoSinSigno << endl << endl;
    
    // ========================================
    // BOOL: Para valores verdadero o falso (lógica)
    // ========================================
    cout << "5. BOOL - Valor booleano" << endl;
    cout << "   Tamaño: 1 byte" << endl;
    cout << "   Valores: true o false" << endl;  // Solo puede ser verdadero o falso
    bool verdadero = true;   // true = verdadero = 1
    bool falso = false;      // false = falso = 0
    cout << "   Ejemplo: bool verdadero = " << verdadero << endl;
    cout << "   Ejemplo: bool falso = " << falso << endl << endl;
    
    // ========================================
    // FLOAT: Números con decimales (precisión normal)
    // ========================================
    cout << "6. FLOAT - Número de punto flotante" << endl;
    cout << "   Tamaño: 4 bytes" << endl;
    cout << "   Rango: 3.4e +/- 38 (7 dígitos de precisión)" << endl;
    float decimal = 3.14159f;  // La 'f' indica que es float, sirve para decimales
    cout << "   Ejemplo: float = " << decimal << endl << endl;
    
    // ========================================
    // DOUBLE: Números con decimales (mayor precisión que float)
    // ========================================
    cout << "7. DOUBLE - Punto flotante de doble precisión" << endl;
    cout << "   Tamaño: 8 bytes" << endl;
    cout << "   Rango: 1.7e +/- 308 (15 dígitos de precisión)" << endl;
    double decimalDoble = 3.141592653589793;  // Más preciso que float
    cout << "   Ejemplo: double = " << decimalDoble << endl << endl;
    
    // ========================================
    // LONG DOUBLE: Números decimales con LA MAYOR precisión posible
    // ========================================
    cout << "8. LONG DOUBLE - Punto flotante de doble precisión largo" << endl;
    cout << "   Tamaño: 8 bytes" << endl;
    cout << "   Rango: 1.7e +/- 308 (15 dígitos de precisión)" << endl;
    long double decimalLargo = 3.14159265358979323846L;  // La 'L' indica long double
    cout << "   Ejemplo: long double = " << decimalLargo << endl;
    
    return 0;

};