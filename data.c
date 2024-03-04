#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 1000
#define LIMITE_INFERIOR 1
#define LIMITE_SUPERIOR 100

// Generador de arreglo de números enteros aleatorios dentro de un rango
void generarArregloAleatorioEnRango(int arreglo[], int tamano, int limiteInferior, int limiteSuperior) {
    // Semilla para la generación de números aleatorios
    srand(time(NULL));

    // Llenar el arreglo con números enteros aleatorios dentro del rango
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = rand() % (limiteSuperior - limiteInferior + 1) + limiteInferior;
    }
}

// Función para imprimir los datos de un arreglo
void imprimirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < 10; i++) {
        printf("%d ", arreglo[i]);
        printf("\n");
    }
}

// Función de búsqueda secuencial
int busquedaSecuencial(int arreglo[], int tamano, int elemento) {
    
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == elemento) {            
            return i;
        }
    }

    return -1;
}

// Función para intercambiar dos elementos de un arreglo
void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función de ordenación burbuja
void ordenarArregloBurbuja(int arreglo[], int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar si el elemento actual es mayor que el siguiente
                intercambiar(&arreglo[j], &arreglo[j + 1]);
            }
        }
    }
}


int main() {
    // Declarar un arreglo estático de 1000 elementos
    int arreglo[tam],elem=0;

    generarArregloAleatorioEnRango(arreglo, tam, LIMITE_INFERIOR, LIMITE_SUPERIOR);    
    //busquedaSecuencial(arreglo, tam, elem);
    ordenarArregloBurbuja(arreglo, tam);
    imprimirArreglo(arreglo, tam);
    return 0;
}
