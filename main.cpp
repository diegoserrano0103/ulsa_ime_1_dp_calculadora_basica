// Práctica 4: Calculadora básica
// Traduce la receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque de código.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué funciones trae ahora utilerias.h? ¿Qué devuelve cada una?
#include "utilerias.h"

int main() {
    // Variables (siempre inicializadas)
    // TODO: opcion, a, b, resultado y simbolo.
    //       ¿De qué tipo es cada una? Revisa la sección 2 de tu README.
    //       ¿Con qué valor empieza un char?
    int Operacion = 0.0;
    int suma = 1;
    int resta = 2;
    int multiplicacion = 3;
    int division = 4;
    double primervalor = 0.0;
    double segundovalor = 0.0;
    double resultado = 0.0;



    // Pasos 1 y 2: título y menú
    // TODO
    std::cout << "Calculadora Basica\n";
std::cout << "Suma: 1, Resta: 2, Multiplicacion:3 y Division: 4\n";

    // Paso 3: leer la opción con leerEntero y repetir si no está entre 1 y 4
    // TODO: ¿qué ciclo usaste en la Práctica 3 para volver a pedir un dato?
    while (true){
    Operacion = leerEntero ("Ingresa el numero de operacion que deseas realizar:");
    if (Operacion < 1 || Operacion > 4) {
        std::cout << "Operación Invalida, Por favor ingrese una operación valida"<< std::endl;
        }
        else {
            break;
        }

    }

    // Pasos 4 y 5: leer los dos números con leerDecimal
    // TODO
    primervalor = leerDecimal("Ingrese Primer Valor: ");
   
    // Paso 6: SOLO si la opción es división, ¿qué haces si b es 0?
    // TODO
   while (true) {
        segundovalor = leerDecimal("Ingrese Segundo Valor: ");

        if (Operacion == division && segundovalor == 0) {
            std::cout << "Error: No se puede dividir entre cero. Intenta de nuevo." << std::endl;
        } else {
            break; // SALE SI NO ES DIVISION O SI EL DIVISOR ES DISTINTO DE 0
        }
    }

    // Paso 7: decisión múltiple
    // TODO: switch (opcion) { case 1: ... break; ... default: ... }
    //       ¿Qué pasa si olvidas un break? (Experimento A)

    if (Operacion == suma) {
        resultado = primervalor + segundovalor;
    }
    if (Operacion == resta) {
        resultado = primervalor - segundovalor;
    }
    if (Operacion == multiplicacion) {
        resultado = primervalor * segundovalor;
    }
    if (Operacion == division) {
        resultado = primervalor / segundovalor;
    }

    // Paso 8: salida -> a simbolo b = resultado
    // TODO
    if (Operacion == suma) {
        std::cout << primervalor << " + " << segundovalor << " = " << resultado << std::endl;
    }
    if (Operacion == resta) {
        std::cout << primervalor << " - " << segundovalor << " = " << resultado << std::endl;
    }
    if (Operacion == multiplicacion) {
        std::cout << primervalor << " * " << segundovalor << " = " << resultado << std::endl;
    }
    if (Operacion == division) {
        std::cout << primervalor << " / " << segundovalor << " = " << resultado << std::endl;
    }
    // ¿Qué significa return 0;?
    return 0;
}