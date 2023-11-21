#include <stdio.h>
#include <stdlib.h>

int CalcularSumaRedondeada(int acumulado, float registros[20][9], int fila, int columna) {
	return acumulado + (int)registros[fila][columna];
}

int Promedio(int suma) {
	return suma / 7; 
}

int main() {
	int fila, columna,promedio ;
	float registros[20][9] = {0};
	int totalAcumulado = 0;
	
	for (fila = 0; fila < 2; fila++) {
		for (columna = 0; columna < 9; columna++) {
			if (columna == 0) {
				registros[fila][columna] = fila + 1;
			} else {
				if (columna == 8) {
					registros[fila][columna] = 0;
				} else {
					printf("Ingrese Km recorridos en el dia %d para el bondi %d: ", columna, fila + 1);
					scanf("%f", &registros[fila][columna]);
				}
			}
		}
	}
	
	for (fila = 0; fila < 2; fila++) {
		for (columna = 1; columna < 9; columna++) {
			if (columna != 8) {
				totalAcumulado = CalcularSumaRedondeada(totalAcumulado, registros, fila, columna);
			} else {
				registros[fila][8] = totalAcumulado;
			}
		}
		totalAcumulado = 0;
	}
	
	printf("N°\tdia1\tdia2\tdia3\tdia4\tdia5\tdia6\tdia7\tdiaTotal\tPromedio\n");
	for (fila = 0; fila < 2; fila++) {
		for (columna = 0; columna < 9; columna++) {
			if (columna == 8) {
				printf("%d\t", (int)registros[fila][columna]);
				promedio = Promedio((int)registros[fila][columna]);
				printf("%d\t", promedio);
			} else {
				printf("%.2f\t", registros[fila][columna]);
			}
		}
		printf("\n");
	}
	system("pause");
	
	return 0;
}
