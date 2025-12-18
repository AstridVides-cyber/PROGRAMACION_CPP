#include <iostream> // Librería para entrada y salida de datos 
#include <string>  // Librería para usar el tipo string
using namespace std;

int main() {

    cout << "=====================================================" << endl;
    cout << "=== TIPOS DE DATOS Y DECLARACIÓN DE VARIABLES ====" << endl;
    cout << "=====================================================" << endl << endl;
    
    // ==========================================
    // ¿QUÉ ES UNA VARIABLE?
    // ==========================================
    // Una variable es un espacio en memoria que guarda un valor
    // Sintaxis: tipo_dato nombre_variable = valor;
    
    cout << "--- DECLARACIÓN DE VARIABLES ---" << endl << endl;
    
    // FORMAS DE DECLARAR VARIABLES:
    
    // 1. Declaración simple (sin valor inicial)
    int edad;  // Se declara pero no tiene valor todavía
    edad = 25; // Ahora sí le asignamos un valor
    cout << "1. Declaración simple:" << endl;
    cout << "   int edad; edad = 25; --> " << edad << endl << endl;
    
    // 2. Declaración con inicialización (más común)
    int altura = 175;  // Declaramos y asignamos valor al mismo tiempo
    cout << "2. Declaración con inicialización:" << endl;
    cout << "   int altura = 175; --> " << altura << endl << endl;
    
    // 3. Declaración múltiple (varias variables del mismo tipo)
    int x = 10, y = 20, z = 30;  // Tres variables en una línea
    cout << "3. Declaración múltiple:" << endl;
    cout << "   int x = 10, y = 20, z = 30;" << endl;
    cout << "   x = " << x << ", y = " << y << ", z = " << z << endl << endl;
    
    // 4. Declaración con auto (C++ detecta el tipo automáticamente)
    auto numero = 100;      // C++ detecta que es int
    auto precio = 19.99;    // C++ detecta que es double
    cout << "4. Declaración con auto:" << endl;
    cout << "   auto numero = 100; --> " << numero << endl;
    cout << "   auto precio = 19.99; --> " << precio << endl << endl;
    
    cout << "=====================================================" << endl << endl;
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
    
    // ==============================================
    // BOOL: Para valores verdadero o falso (lógica)
    // ==============================================
    cout << "5. BOOL - Valor booleano" << endl;
    cout << "   Tamaño: 1 byte" << endl;
    cout << "   Valores: true o false" << endl;  // Solo puede ser verdadero o falso
    bool verdadero = true;   // true = verdadero = 1
    bool falso = false;      // false = falso = 0
    cout << "   Ejemplo: bool verdadero = " << verdadero << endl;
    cout << "   Ejemplo: bool falso = " << falso << endl << endl;
    
    // ================================================
    // FLOAT: Números con decimales (precisión normal)
    // ================================================
    cout << "6. FLOAT - Número de punto flotante" << endl;
    cout << "   Tamaño: 4 bytes" << endl;
    cout << "   Rango: 3.4e +/- 38 (7 dígitos de precisión)" << endl;
    float decimal = 3.14159f;  // La 'f' indica que es float, sirve para decimales
    cout << "   Ejemplo: float = " << decimal << endl << endl;
    
    // ==========================================================
    // DOUBLE: Números con decimales (mayor precisión que float)
    // ==========================================================
    cout << "7. DOUBLE - Punto flotante de doble precisión" << endl;
    cout << "   Tamaño: 8 bytes" << endl;
    cout << "   Rango: 1.7e +/- 308 (15 dígitos de precisión)" << endl;
    double decimalDoble = 3.141592653589793;  // Más preciso que float
    cout << "   Ejemplo: double = " << decimalDoble << endl << endl;
    
    // ==============================================================
    // LONG DOUBLE: Números decimales con LA MAYOR precisión posible
    // ==============================================================
    cout << "8. LONG DOUBLE - Punto flotante de doble precisión largo" << endl;
    cout << "   Tamaño: 8 bytes" << endl;
    cout << "   Rango: 1.7e +/- 308 (15 dígitos de precisión)" << endl;
    long double decimalLargo = 3.14159265358979323846L;  // La 'L' indica long double
    cout << "   Ejemplo: long double = " << decimalLargo << endl << endl;
    
    // =================================================================
    // STRING: Cadenas de texto (no está en la tabla pero es muy usado)
    // =================================================================
    cout << "9. STRING - Cadena de texto" << endl;
    cout << "   Descripción: Guarda texto (palabras, frases)" << endl;
    string nombre = "Juan";  // Se usan comillas dobles para texto
    string mensaje = "Hola Mundo";
    cout << "   Ejemplo: string nombre = \"Juan\"; --> " << nombre << endl;
    cout << "   Ejemplo: string mensaje = \"" << mensaje << "\";" << endl << endl;
    
    cout << "=====================================================" << endl << endl;
    
    // ==========================================
    // REGLAS PARA NOMBRES DE VARIABLES
    // ==========================================
    cout << "--- REGLAS PARA NOMBRES DE VARIABLES ---" << endl << endl;
    
    cout << "VÁLIDOS:" << endl;
    int miEdad = 20;           // camelCase (recomendado)
    int mi_edad = 20;          // snake_case
    int edad2 = 20;            // Con números (pero no al inicio)
    int _privado = 20;         // Puede empezar con _
    cout << "   miEdad, mi_edad, edad2, _privado" << endl << endl;
    
    cout << "NO VÁLIDOS:" << endl;
    cout << "   2edad (no puede empezar con número)" << endl;
    cout << "   mi edad (no puede tener espacios)" << endl;
    cout << "   int (no puede usar palabras reservadas)" << endl;
    cout << "   mi-edad (no puede usar guiones)" << endl << endl;
    
    cout << "CONSEJOS:" << endl;
    cout << "   - Usa nombres descriptivos: edad, no e" << endl;
    cout << "   - Usa camelCase: miNombre, edadUsuario" << endl;
    cout << "   - Las constantes en MAYÚSCULAS: PI, MAX_VALOR" << endl << endl;
    
    // ==========================================
    // CONSTANTES (valores que no cambian)
    // ==========================================
    cout << "--- CONSTANTES ---" << endl << endl;
    
    const double PI = 3.14159;  // const = no se puede modificar después
    const int DIAS_SEMANA = 7;
    // PI = 3.14; // ERROR! No se puede cambiar una constante
    
    cout << "Declaración de constantes:" << endl;
    cout << "   const double PI = 3.14159; --> " << PI << endl;
    cout << "   const int DIAS_SEMANA = 7; --> " << DIAS_SEMANA << endl;
    cout << "   Las constantes NO pueden cambiar su valor" << endl << endl;
    
    // ==========================================
    // ENTRADA DE DATOS POR TECLADO
    // ==========================================
    cout << "--- ENTRADA DE DATOS ---" << endl << endl;
    
    cout << "Para leer datos del usuario usamos: cin" << endl;
    cout << "Ejemplo de código:" << endl;
    cout << "   int numero;" << endl;
    cout << "   cout << \"Ingresa un número: \";" << endl;
    cout << "   cin >> numero;" << endl << endl;

    // Ejemplo práctico comentado:
    /*
    int tuEdad;
    cout << "Ingresa tu edad: ";
    cin >> tuEdad;
    cout << "Tu edad es: " << tuEdad << endl;
    */
    
    return 0;
};