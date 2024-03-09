#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define vmin 1
#define vmax 100
#define tam 10

void generaListaRandom(int n, int mi, int mx, int lista[]);
void printList(int n, int lista[]);
int minlista(int lista[], int n);
int maxlista(int lista[], int n);
void suma_listas(int lista[], int _lista[],int n);

int main() {
    
	int n = tam, lista[n], _lista[n], min, max;

    // Generador de la primera lista
    srand(time(0));
    generaListaRandom(n, vmin, vmax, lista);
    printf("Lista 1:\t");
    printList(n, lista);
    min = minlista(lista, n);
    max = maxlista(lista, n);
    printf("\nMinimo: %d, Maximo: %d", min, max);

    // Generador de la segunda lista con una semilla diferente
    srand(time(0) + 1);
    generaListaRandom(n, vmin, vmax, _lista);
    printf("\n\nLista 2:\t");
    printList(n, _lista);
    min = minlista(_lista, n);
    max = maxlista(_lista, n);
    printf("\nMinimo: %d, Maximo: %d", min, max);
    
    
	//Suma de las listas
	printf("\n\nSuma de las dos listas: \t");
    suma_listas(lista,_lista,n);

    return 0;
}

void printList(int n, int lista[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
}

void generaListaRandom(int n, int mi, int mx, int lista[]) {
    int i;
    for (i = 0; i < n; i++)
        lista[i] = rand() % (mx - mi + 1) + mi;
}

int minlista(int lista[], int n) {
    int min = lista[0], i;
    for (i = 0; i < n; i++) {
        if (lista[i] < min)
            min = lista[i];
    }
    return min;
}

int maxlista(int lista[], int n) {
    int max = lista[0], i;
    for (i = 0; i < n; i++) {
        if (lista[i] > max)
            max = lista[i];
    }
    return max;
}

void suma_listas(int lista[], int _lista[],int n){
	int suma[n],i;
	for(i = 0; i < n; i++){		
        suma[i]=lista[i]+_lista[i];
    }
	printList(n,suma);
}













