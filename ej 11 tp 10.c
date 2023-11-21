
#include <stdio.h>
#include <stdlib.h>

void MostrarInquilinos(int torres[7][20][6]) {
	int i, j, k;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 20; j++) {
			for (k = 0; k < 6; k++) {
				printf("%d\t", torres[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

int ToHabitantes(int torres[7][20][6]) {
	int totalHabitantes = 0;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 20; j++) {
			for (int k = 0; k < 6; k++) {
				totalHabitantes += torres[i][j][k];
			}
		}
	}
	return totalHabitantes;
}

int main() {
	int torres[7][20][6] = {0}, i, j, k,totalHabitantes ;
	float promedioPorTorre[7][20], totalPorTorre[7] = {0};
	
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 20; j++) {
			int acumulador = 0;
			for (k = 0; k < 6; k++) {
				printf("Habitantes de la Torre %d Piso %d del Depto %d: ", i + 1, j + 1, k + 1);
				scanf("%d", &torres[i][j][k]);
				totalPorTorre[i] += torres[i][j][k];
				acumulador += torres[i][j][k];
			}
			promedioPorTorre[i][j] = acumulador;
		}
	}
	
	MostrarInquilinos(torres);
	
	totalHabitantes = ToHabitantes(torres);
	printf("Cantidad de habitantes del complejo: %d\n", totalHabitantes);
	
	printf("Cantidad de habitantes por torre:\n");
	for (i = 0; i < 7; i++) {
		printf("Torre %d: %.2f\n", i + 1, totalPorTorre[i]);
	}
	
	printf("Promedio de habitantes por torre:\n");
	for (i = 0; i < 7; i++) {
		printf("Torre %d: %.2f\n", i + 1, totalPorTorre[i] / 20.0);
	}
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Torre %d Piso %d: %.2f\n", i + 1, j + 1, promedioPorTorre[i][j] / 6.0);
		}
	}
	system("pause");
	
	return 0;
	
}
