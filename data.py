import random

tam = 1000
LIMITE_INFERIOR = 1
LIMITE_SUPERIOR = 100

# Generador de arreglo de números enteros aleatorios dentro de un rango
def generar_arreglo_aleatorio_en_rango(tamano, limite_inferior, limite_superior):
    # Semilla para la generación de números aleatorios
    random.seed()

    # Llenar el arreglo con números enteros aleatorios dentro del rango
    return [random.randint(limite_inferior, limite_superior) for _ in range(tamano)]

# Función para imprimir los datos de un arreglo
def imprimir_arreglo(arreglo):
    for i in range(10):
        print(arreglo[i])

# Función de búsqueda secuencial
def busqueda_secuencial(arreglo, elemento):
    for i, num in enumerate(arreglo):
        if num == elemento:
            return i
    return -1

# Función para intercambiar dos elementos de un arreglo
def intercambiar(a, b):
    temp = a
    a = b
    b = temp
    return a, b

# Función de ordenación burbuja
def ordenar_arreglo_burbuja(arreglo):
    tamano = len(arreglo)
    for i in range(tamano - 1):
        for j in range(tamano - i - 1):
            if arreglo[j] > arreglo[j + 1]:
                # Intercambiar si el elemento actual es mayor que el siguiente
                arreglo[j], arreglo[j + 1] = intercambiar(arreglo[j], arreglo[j + 1])

# Main
arreglo = generar_arreglo_aleatorio_en_rango(tam, LIMITE_INFERIOR, LIMITE_SUPERIOR)
# elem = 0
# busqueda_secuencial(arreglo, elem)
ordenar_arreglo_burbuja(arreglo)
imprimir_arreglo(arreglo)