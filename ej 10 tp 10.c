#include <stdio.h>
#include <stdlib.h>

int Sum(int filaActual[10]) {
	int suma = 0;
	for (int i = 0; i < 10; i++) {
		suma += filaActual[i];
	}
	return suma;
}

void Mostrar(int *fila, int *columna) {
	int i;
	printf("Filas:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", fila[i]);
	}
	printf("\nColumnas:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", columna[i]);
	}
}

int main() {
	int matriz[10][10] = {0};
	int columna[10] = {0};
	int fila[10] = {0}, i, j, numeroFila,sumaFila;
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("Ingrese numero %d %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
			fila[i] += matriz[i][j];
			columna[j] += matriz[i][j];
		}
	}
	
	Mostrar(fila, columna);
	
	
	printf("\nIngrese el número de fila para calcular la suma: ");
	scanf("%d", &numeroFila);
	
	sumaFila = Sum(matriz[numeroFila - 1]);
	printf("La suma de la fila %d es: %d\n", numeroFila, sumaFila);
	
	system("pause");
	
	return 0;
}
