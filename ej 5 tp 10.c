#include <stdio.h>
#include <stdlib.h>

int CalcularSuma(int arreglo[15][12]) {
	int sumaTotal = 0;
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 12; j++) {
			sumaTotal += arreglo[i][j];
		}
	}
	
	return sumaTotal;
}

void Mostrar(int arreglo[15][12]) {
	int menorElemento = arreglo[0][0], negativosEnFilas5a9 = 0;
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 12; j++) {
			if (menorElemento > arreglo[i][j]) {
				menorElemento = arreglo[i][j];
			}
		}
	}
	
	for (int i = 4; i < 8; i++) {
		for (int j = 0; j < 12; j++) {
			if (arreglo[i][j] < 0) {
				negativosEnFilas5a9++;
			}
		}
	}
	
	printf("El menor número es %d\n", menorElemento);
	printf("La cantidad de negativos en las filas 5 a 9 es: %d\n", negativosEnFilas5a9);
}

int main() {
	int arreglo[15][12] = {0}, i, j, suma;
	
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 12; j++) {
			printf("Ingrese el elemento %d%d: ", i + 1, j + 1);
			scanf("%d", &arreglo[i][j]);
		}
	}
	
	suma = CalcularSuma(arreglo);
	printf("La suma de las primeras 5 filas es: %d\n", suma);
	
	Mostrar(arreglo);
	
	system("pause");
	
	return 0;
}
